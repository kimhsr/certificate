from unittest import result


class FourCal:
  def Setdata(sel, fir, sec):
    sel.fir = fir
    sel.sec = sec
  def add(sel):
    result sel.fir + sel.sec
    return result
a = FourCal()
a.Setdata(4, 2)
print(a.add())