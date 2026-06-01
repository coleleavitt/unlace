__int64 __fastcall sub_7EC10(unsigned __int16 *a1, unsigned __int64 a2)
{
  unsigned int v4; // esi
  int v5; // eax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax

  v4 = 0;
  v5 = *a1;
  v6 = (unsigned int)(v5 - 487);
  if ( (unsigned __int16)(v5 - 487) <= 0x10u )
  {
    v7 = 65793;
    LOBYTE(v4) = _bittest64(&v7, v6);
    if ( (_BYTE)v4 )
    {
      v4 = 0;
      v8 = a1[8] + 24LL;
      if ( v8 < a2 )
      {
        v9 = a1[1];
        if ( v9 < (a2 - v8) / 0x48 )
        {
          v10 = *((_QWORD *)a1 + 1);
          if ( *((_DWORD *)a1 + 5) )
          {
            LOBYTE(v4) = v10 < a2 && v10 >= v8 + 72 * v9;
            if ( (_BYTE)v4 )
              LOBYTE(v4) = (a2 - v10) / 0x12 >= *((unsigned int *)a1 + 5);
          }
          else
          {
            LOBYTE(v4) = v10 == 0;
          }
        }
      }
    }
  }
  return v4;
}
