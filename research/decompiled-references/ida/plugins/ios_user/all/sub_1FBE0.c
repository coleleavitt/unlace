unsigned __int64 __fastcall sub_1FBE0(_QWORD *a1)
{
  _QWORD *v1; // rax
  unsigned __int64 v2; // rsi
  _QWORD *v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+10h] [rbp-88h] BYREF
  void *dest[2]; // [rsp+28h] [rbp-70h]
  __int128 v9; // [rsp+38h] [rbp-60h]
  __int128 v10; // [rsp+48h] [rbp-50h]
  unsigned __int64 v11; // [rsp+58h] [rbp-40h]

  v1 = (_QWORD *)a1[177];
  v11 = __readfsqword(0x28u);
  v2 = a1[223];
  if ( v1 )
  {
    v3 = a1 + 176;
    do
    {
      while ( 1 )
      {
        v4 = v1[2];
        v5 = v1[3];
        if ( v1[4] < v2 )
          break;
        v3 = v1;
        v1 = (_QWORD *)v1[2];
        if ( !v4 )
          goto LABEL_6;
      }
      v1 = (_QWORD *)v1[3];
    }
    while ( v5 );
LABEL_6:
    if ( v3 != a1 + 176 && v2 >= v3[4] )
    {
      *(_OWORD *)dest = 0;
      v7[0] = 0xFFFFFFFFLL;
      v7[1] = -1;
      v7[2] = 0;
      v9 = 0;
      v10 = 0;
      set_debug_event_code();
      sub_18660(v7, 9);
    }
  }
  return v11 - __readfsqword(0x28u);
}

