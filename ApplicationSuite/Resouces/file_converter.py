import pandas as pd
import sys

if len(sys.argv) < 2:
	print ("format: python3 file_converter.py [file_path]")
	sys.exit(0)
path = sys.argv[1]
data_xls = pd.read_excel(path, 'Sheet1', index_col=None)
data_xls.to_csv('/home/aksh/QT/ApplicationSuite/Resouces/data.csv', encoding='utf-8')
