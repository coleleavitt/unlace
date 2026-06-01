__int64 __fastcall sub_303A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d

  qstrncpy();
  if ( (unsigned __int8)qgetenv() && (unsigned __int8)qisdir() && (qmakepath(), v2 = qisdir(), (_BYTE)v2) )
  {
    qstrncpy();
  }
  else if ( (unsigned __int8)sub_30290(a1, a2, "bochs-debugger")
         || (unsigned __int8)sub_30290(a1, a2, "bochsdbg")
         || (v2 = sub_30290(a1, a2, "bochs"), (_BYTE)v2) )
  {
    qbasename();
    qstrncpy();
    return (unsigned int)qdirname();
  }
  return v2;
}

