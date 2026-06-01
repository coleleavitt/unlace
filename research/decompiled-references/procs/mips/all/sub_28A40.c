__int64 __fastcall sub_28A40(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int64 v4; // rax

  v4 = *(unsigned __int16 *)(a2 + 24);
  LODWORD(a2) = 0;
  LOWORD(v4) = v4 - 144;
  if ( (unsigned __int16)v4 <= 6u )
  {
    a2 = 83;
    LOBYTE(a2) = _bittest64(&a2, v4);
    if ( (_BYTE)a2 )
    {
      *a3 = 0;
      *a4 = 1;
    }
  }
  return (unsigned int)a2;
}
