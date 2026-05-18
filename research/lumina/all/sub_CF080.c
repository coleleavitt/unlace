unsigned __int64 __fastcall sub_CF080(__int64 a1, int *a2)
{
  int v2; // edx
  int *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+10h] [rbp-48h]
  __int128 v9; // [rsp+20h] [rbp-38h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v7[0] = a1;
  v8 = 0;
  v10 = __readfsqword(0x28u);
  v9 = 0;
  v7[1] = sub_C4540;
  sub_CDDC0((__int64)v7, a2);
  if ( *a2 > 0 )
  {
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = &a2[6 * v2];
        if ( (*((_BYTE *)v3 + 25) & 3) == 0 )
        {
          v4 = *((_QWORD *)v3 + 2);
          v5 = *(_QWORD **)(a1 + 400);
          if ( v5 )
            break;
        }
LABEL_3:
        if ( ++v2 >= *a2 )
          return __readfsqword(0x28u) ^ v10;
      }
      while ( v4 != *v5 )
      {
        v5 = (_QWORD *)v5[3];
        if ( !v5 )
          goto LABEL_3;
      }
      *v5 = 0;
      ++v2;
    }
    while ( v2 < *a2 );
  }
  return __readfsqword(0x28u) ^ v10;
}
