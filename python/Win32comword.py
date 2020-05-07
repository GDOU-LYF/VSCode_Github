from win32com.client import Dispatch
app=Dispatch("Outlook.Application")
doc=app.Documents.Add()
app.Visible = True