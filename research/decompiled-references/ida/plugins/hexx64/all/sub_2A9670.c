unsigned __int64 __fastcall sub_2A9670(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  const char *v4; // rax
  __int64 v6; // rdx
  __int64 tinfo_size; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v18; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int16 v20; // [rsp+30h] [rbp-98h]
  _QWORD v21[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-78h] BYREF
  _DWORD v23[4]; // [rsp+60h] [rbp-68h] BYREF
  _DWORD v24[4]; // [rsp+70h] [rbp-58h] BYREF
  int v25; // [rsp+80h] [rbp-48h]
  unsigned __int64 v26; // [rsp+88h] [rbp-40h]

  v4 = s1;
  v26 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a3 + 24);
  v18 = 0;
  if ( *(_QWORD *)(v6 + 24) )
    v4 = *(const char **)(v6 + 16);
  if ( !v4 )
    goto LABEL_8;
  v19[1] = v4;
  v20 = 256;
  v19[0] = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_8;
  tinfo_size = get_tinfo_size();
  if ( *(_DWORD *)(a3 + 8) != 61 )
    sub_2992B0(*(double *)a4.m128_u64);
  if ( tinfo_size != sub_255A30(*(__int64 **)(a3 + 24)) )
  {
    sub_32C540(v19, *(_QWORD *)(*(_QWORD *)a1 + 112LL), &v18);
    v22[0] = 1;
    v22[1] = 0;
    copy_tinfo_t();
    v8 = sub_254FC0(a2);
    v9 = *(_QWORD *)a1;
    v21[1] = v8;
    v21[0] = 6;
    sub_2A0060((__int64)v21, v9, v10, v11, v12, v13, *(double *)a4.m128_u64);
    v23[0] = 0;
    sub_29F770((__int64)v23, (unsigned int *)v21, *(double *)a4.m128_u64);
    v24[0] = 0;
    sub_29F770((__int64)v24, (unsigned int *)v22, *(double *)a4.m128_u64);
    v25 = 1;
    sub_2A8310(a1, (__int64)v23, 0, v14, v15, v16, a4);
    v25 = -1;
    sub_29EC30((__int64)v24, *(double *)a4.m128_u64);
    sub_29EC30((__int64)v23, *(double *)a4.m128_u64);
    sub_29EC30((__int64)v21, *(double *)a4.m128_u64);
    sub_29EC30((__int64)v22, *(double *)a4.m128_u64);
    clear_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
LABEL_8:
    clear_tinfo_t();
  }
  return v26 - __readfsqword(0x28u);
}

