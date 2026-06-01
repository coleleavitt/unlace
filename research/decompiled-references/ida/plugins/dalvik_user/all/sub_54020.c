__int64 __fastcall sub_54020(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rbp
  char v8; // al
  __int64 v9; // rdi
  unsigned __int8 *v10; // rbx
  int i; // r15d
  unsigned __int8 *v12; // [rsp+0h] [rbp-88h] BYREF
  __int128 v13; // [rsp+8h] [rbp-80h]
  char v14[8]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+38h] [rbp-50h]
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v2 = sub_135E0(a1, a2);
  v3 = a1[1];
  v4 = a1[5];
  v5 = a1[9];
  v6 = v2;
  if ( (unsigned __int8)sub_1ADC0(v2, v3) )
  {
    v13 = 0;
    v12 = nullptr;
    v8 = sub_501F0(v6 + 864, (__int64 *)&v12, v3, v4, v5);
    v9 = (__int64)v12;
    if ( v8 )
    {
      idcv_object();
      v10 = v12;
      if ( 16LL * (_QWORD)v13 )
      {
        for ( i = 0; ; ++i )
        {
          v14[0] = 2;
          v16 = 0;
          v15 = 0;
          sub_53ED0((__int64)v14, v10);
          set_idcv_slice();
          v10 += 16;
          free_idcv();
          v9 = (__int64)v12;
          if ( v10 == &v12[16 * (_QWORD)v13] )
            break;
        }
      }
      else
      {
        v9 = (__int64)v12;
      }
    }
    if ( v9 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
  }
  return 0;
}

