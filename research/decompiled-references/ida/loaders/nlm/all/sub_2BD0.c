__int64 __fastcall sub_2BD0(_QWORD *a1)
{
  bool v1; // zf
  _QWORD *v2; // rbx
  unsigned __int16 v3; // ax
  char v4; // dl
  unsigned __int8 v6; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v1 = *a1 == 0;
  v7 = __readfsqword(0x28u);
  v2 = a1;
  if ( !v1 )
  {
    v3 = HIWORD(dword_82C2);
    do
    {
      while ( 1 )
      {
        if ( v3 <= 0xFFu )
        {
          if ( qlread(qword_8220, &v6, 1) != 1 )
            sub_2BB0(897);
          v3 = v6 | 0x8000;
        }
        v4 = v3;
        v3 >>= 1;
        HIWORD(dword_82C2) = v3;
        if ( (v4 & 1) == 0 )
          break;
        v2 = (_QWORD *)v2[1];
        if ( !*v2 )
          return *((unsigned __int8 *)v2 + 8);
      }
      v2 = (_QWORD *)*v2;
    }
    while ( *v2 );
  }
  return *((unsigned __int8 *)v2 + 8);
}

