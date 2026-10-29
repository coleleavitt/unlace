unsigned __int64 __fastcall sub_A1200(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // r12
  char v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  _WORD *v12; // rdx
  __int16 v13; // ax
  _UNKNOWN **v14; // rdx
  __int16 v15; // ax
  __int64 v16; // rax
  int v17; // [rsp+Ch] [rbp-8Ch] BYREF
  __int64 v18; // [rsp+10h] [rbp-88h] BYREF
  char v19; // [rsp+18h] [rbp-80h]
  __m128i v20; // [rsp+20h] [rbp-78h] BYREF
  __int64 v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  __int64 v23; // [rsp+40h] [rbp-58h]
  char v24; // [rsp+48h] [rbp-50h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v3 = (__int64 *)a1[31];
  v25 = __readfsqword(0x28u);
  if ( !v3 )
  {
    v16 = sub_87C20(*(_QWORD **)(*a1 + 16LL), *(_QWORD *)(*a1 + 24LL));
    a1[31] = v16;
    v3 = (__int64 *)v16;
  }
  v19 = 0;
  v18 = 0;
  v20 = 0;
  if ( sub_945B0(v3, &v20, 19) && (v4 = sub_96D10((__int64)v3, (__int64)&v18, v20.m128i_i64)) != 0 )
  {
    v12 = &unk_ABD48;
    v13 = 7;
    while ( v13 != (_WORD)v18 )
    {
      v13 = v12[1];
      ++v12;
      if ( !v13 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    sub_84A10(&v20);
    v19 = 0;
    v18 = 0;
    v20 = 0;
    if ( !sub_945B0(v3, &v20, 19) || (v4 = sub_96D10((__int64)v3, (__int64)&v18, v20.m128i_i64)) == 0 )
    {
      v4 = 0;
      sub_84A10(&v20);
      goto LABEL_6;
    }
    v14 = &off_ABD40;
    v15 = 3;
    while ( (_WORD)v18 != v15 )
    {
      v15 = *((_WORD *)v14 + 1);
      v14 = (_UNKNOWN **)((char *)v14 + 2);
      if ( !v15 )
      {
        v4 = 0;
        break;
      }
    }
  }
  sub_84A10(&v20);
LABEL_6:
  v5 = *a1;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 128LL) + 24LL);
  v20.m128i_i32[2] = 0;
  v21 = 0;
  v23 = v6;
  v7 = a1[31];
  v20.m128i_i64[0] = (__int64)off_C9570;
  v22 = a2;
  v24 = v4;
  if ( !v7 )
  {
    v7 = sub_87C20(*(_QWORD **)(v5 + 16), *(_QWORD *)(v5 + 24));
    a1[31] = v7;
  }
  v21 = v7;
  sub_A0CE0(a1, (__int64)&v20, 0);
  v8 = *a1;
  v18 = 0;
  v9 = *(_QWORD *)(v8 + 24);
  v10 = a1[32];
  v17 = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64, __int64, int *, __int64 *))(v10 + 112))(v9, 11, &v17, &v18) && v17 )
    *(_QWORD *)(a2 + 24) = sub_97A10((__int64)a1);
  return v25 - __readfsqword(0x28u);
}

