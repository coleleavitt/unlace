unsigned __int64 __fastcall sub_2A2F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(__int64); // rax
  int v3; // r14d
  __int64 (__fastcall *v4)(__int64, int); // rax
  __int64 v5; // r13
  __int64 i; // rbp
  __int64 (__fastcall *v7)(__int64, int, int); // rax
  int v8; // r15d
  __int64 v9; // rdx
  _DWORD *v10; // rsi
  const char *v11; // r15
  const char *v12; // rax
  int v14; // [rsp+1Ch] [rbp-9Ch]
  _DWORD v15[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-80h] BYREF
  __int64 v17[4]; // [rsp+40h] [rbp-78h] BYREF
  const char *v18; // [rsp+60h] [rbp-58h] BYREF
  __int64 v19; // [rsp+68h] [rbp-50h]
  unsigned __int64 v20; // [rsp+78h] [rbp-40h]

  v1 = *(_QWORD *)a1;
  v20 = __readfsqword(0x28u);
  v2 = *(__int64 (__fastcall **)(__int64))(v1 + 88);
  if ( v2 == sub_BA20 )
    v14 = *(_DWORD *)(a1 + 40);
  else
    v14 = v2(a1);
  if ( v14 >= 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      sub_28EA0((__int64)v17, a1, v3);
      v4 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
      if ( v4 != sub_BA40 )
        break;
      if ( *(_QWORD *)(a1 + 56) )
      {
        v5 = *(int *)(*(_QWORD *)(a1 + 48) + 24LL * v3 + 8);
        goto LABEL_8;
      }
LABEL_29:
      if ( v17[0] )
      {
        v17[1] = 0;
        qfree(v17[0]);
      }
      if ( v14 < ++v3 )
        return v20 - __readfsqword(0x28u);
    }
    v5 = (int)v4(a1, v3);
LABEL_8:
    if ( (int)v5 > 0 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
        if ( v7 == sub_BA80 )
          v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL * v3) + 4 * i);
        else
          v8 = v7(a1, v3, i);
        sub_28EA0((__int64)&v18, a1, v8);
        v9 = *(_QWORD *)(a1 + 416);
        v15[0] = v3;
        v10 = (_DWORD *)(a1 + 408);
        v15[1] = v8;
        if ( !v9 )
          goto LABEL_23;
        do
        {
          while ( v3 <= *(_DWORD *)(v9 + 32) && (v3 != *(_DWORD *)(v9 + 32) || v8 <= *(_DWORD *)(v9 + 36)) )
          {
            v10 = (_DWORD *)v9;
            v9 = *(_QWORD *)(v9 + 16);
            if ( !v9 )
              goto LABEL_19;
          }
          v9 = *(_QWORD *)(v9 + 24);
        }
        while ( v9 );
LABEL_19:
        if ( v10 == (_DWORD *)(a1 + 408) || v3 < v10[8] || v3 == v10[8] && v8 < v10[9] )
        {
LABEL_23:
          v16 = v15;
          v10 = (_DWORD *)sub_2A220((_QWORD *)(a1 + 400), (__int64)v10, (__int64)&unk_78AE8, &v16);
        }
        v11 = s1;
        if ( v19 )
          v11 = v18;
        v12 = sub_20C80((unsigned int)v10[10]);
        sub_10400(v17, (__int64)" -[%s]->%s", v12, v11);
        if ( v18 )
        {
          v19 = 0;
          qfree(v18);
        }
      }
    }
    goto LABEL_29;
  }
  return v20 - __readfsqword(0x28u);
}
