unsigned __int64 __fastcall sub_240CD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _QWORD *a6,
        double a7)
{
  __int64 *v7; // r14
  __int64 v11; // r8
  __int64 v12; // rbp
  unsigned __int64 v13; // r9
  size_t v14; // r10
  const void *v15; // r11
  void *v16; // rax
  __int64 v17; // rbp
  char v19; // al
  unsigned __int64 v20; // rax
  bool v21; // [rsp+Fh] [rbp-69h]
  __int64 v22; // [rsp+10h] [rbp-68h]
  __int64 v23; // [rsp+10h] [rbp-68h]
  unsigned __int64 v24; // [rsp+18h] [rbp-60h]
  size_t v25; // [rsp+18h] [rbp-60h]
  const void *v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  char v28[8]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 8) != 61 )
  {
    if ( !under_debugger )
      sub_383060(0xC4C1u, a7);
    BUG();
  }
  v7 = *(__int64 **)(a1 + 24);
  v21 = a5 != 2;
  *v7 = sub_32ABC0(a3, a4, a5 != 2);
  if ( a6 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)a1 = *a6;
    v12 = a6[3];
    *(_DWORD *)(v11 + 8) = *(_DWORD *)(v12 + 8);
    *(_BYTE *)(v11 + 12) = *(_BYTE *)(v12 + 12);
    *(_BYTE *)(v11 + 13) = *(_BYTE *)(v12 + 13);
    *(_BYTE *)(v11 + 14) = *(_BYTE *)(v12 + 14);
    *(_BYTE *)(v11 + 15) = *(_BYTE *)(v12 + 15);
    if ( v11 + 16 != v12 + 16 )
    {
      v13 = *(_QWORD *)(v12 + 24);
      if ( !v13 || (v14 = v13 - 1, v13 == 1) )
      {
        *(_QWORD *)(v11 + 24) = 0;
      }
      else
      {
        v15 = *(const void **)(v12 + 16);
        v16 = *(void **)(v11 + 16);
        if ( *(_QWORD *)(v11 + 32) < v13 )
        {
          v27 = v11;
          v26 = *(const void **)(v12 + 16);
          v25 = v13 - 1;
          v23 = *(_QWORD *)(v12 + 24);
          v16 = (void *)qvector_reserve(v11 + 16, *(_QWORD *)(v11 + 16), v23, 1);
          v11 = v27;
          v15 = v26;
          v14 = v25;
          v13 = v23;
          *(_QWORD *)(v27 + 16) = v16;
        }
        *(_QWORD *)(v11 + 24) = v13;
        v24 = v13;
        v22 = v11;
        memmove(v16, v15, v14);
        v11 = v22;
        *(_BYTE *)(*(_QWORD *)(v22 + 16) + v24 - 1) = 0;
      }
    }
    *(_QWORD *)(v11 + 40) = *(_QWORD *)(v12 + 40);
  }
  v17 = *(_QWORD *)(a1 + 24);
  if ( !*(_BYTE *)(v17 + 13) && v21 && *(__int64 *)v17 < 0 )
  {
    if ( !(unsigned __int8)is_enum() && !(unsigned __int8)is_char() )
    {
      v19 = is_stroff();
      v17 = *(_QWORD *)(a1 + 24);
      if ( v19 )
        goto LABEL_12;
      v20 = sub_23E480(*(_DWORD *)(a2 + 640), *(_QWORD *)v17, a4, a5);
      sub_329C80(v17 + 8, v20);
    }
    v17 = *(_QWORD *)(a1 + 24);
  }
LABEL_12:
  sub_240880((__int64 *)v28, v17, a2, a4, a5);
  copy_tinfo_t();
  clear_tinfo_t();
  return v29 - __readfsqword(0x28u);
}

