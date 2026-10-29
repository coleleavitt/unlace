unsigned __int64 __fastcall sub_5660(const char *a1, int a2, int a3, const char *a4, double a5)
{
  if ( a2 < 0 )
  {
    qstrerror();
    return sub_5470((__int64)"%#a: %s failed: %s\n", a5, a4, a1);
  }
  else if ( a2 )
  {
    return sub_5470((__int64)"%#a: %s failed: expected %zuu, received %d\n", a5, a4, (size_t)a1, a3);
  }
  else
  {
    return sub_5470((__int64)"%#a: %s failed: pipe closed\n", a5, a4);
  }
}

