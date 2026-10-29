unsigned __int64 __fastcall sub_2A9000(__int64 *a1, __int64 a2, __int64 a3, __m128 a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rsi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rsi
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rsi
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  char tinfo_property; // al
  __int64 v36; // rdx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rsi
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  char v45; // [rsp+10h] [rbp-B8h]
  _QWORD v46[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v47[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v48; // [rsp+50h] [rbp-78h] BYREF
  __int64 v49; // [rsp+58h] [rbp-70h]
  _DWORD v50[4]; // [rsp+60h] [rbp-68h] BYREF
  _DWORD v51[4]; // [rsp+70h] [rbp-58h] BYREF
  int v52; // [rsp+80h] [rbp-48h]
  unsigned __int64 v53; // [rsp+88h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v46[0] = 2;
  v6 = (_QWORD *)operator new(0x10u);
  *v6 = 0;
  v6[1] = 0;
  v46[1] = v6;
  if ( a2 )
  {
    v11 = *a1;
    v49 = a2;
    v48 = 6;
    sub_2A0060((__int64)&v48, v11, v7, v8, v9, v10, *(double *)a4.m128_u64);
    v50[0] = 0;
    sub_29F770((__int64)v50, (unsigned int *)v46, *(double *)a4.m128_u64);
    v51[0] = 0;
    sub_29F770((__int64)v51, (unsigned int *)&v48, *(double *)a4.m128_u64);
    v52 = 2;
    sub_2A8310((__int64)a1, (__int64)v50, 0, v12, v13, v14, a4);
    v52 = -1;
    sub_29EC30((__int64)v51, *(double *)a4.m128_u64);
    sub_29EC30((__int64)v50, *(double *)a4.m128_u64);
    sub_29EC30((__int64)&v48, *(double *)a4.m128_u64);
    if ( *(_DWORD *)(a2 + 8) == 48
      && (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) == 52 || (get_tinfo_property() & 0xF) == 0xB)
      && (get_tinfo_property() & 0xF) == 0xA )
    {
      tinfo_property = get_tinfo_property();
      if ( tinfo_property && ((tinfo_property & 0xE) != 0 || (tinfo_property & 0x30) == 0) )
      {
        get_tinfo_property();
        v45 = get_tinfo_property();
        clear_tinfo_t();
        if ( (v45 & 0x3F) != 0x30 )
        {
          v48 = 1;
          v49 = 0;
          copy_tinfo_t();
          v40 = *(_QWORD *)(a2 + 24);
          if ( *(_DWORD *)(v40 + 8) == 52 )
            v40 = *(_QWORD *)(v40 + 24);
          v47[1] = v40;
          v41 = *a1;
          v47[0] = 6;
          sub_2A0060((__int64)v47, v41, v36, v37, v38, v39, *(double *)a4.m128_u64);
          v50[0] = 0;
          sub_29F770((__int64)v50, (unsigned int *)v47, *(double *)a4.m128_u64);
          v51[0] = 0;
          sub_29F770((__int64)v51, (unsigned int *)&v48, *(double *)a4.m128_u64);
          v52 = 2;
          sub_2A8310((__int64)a1, (__int64)v50, 0, v42, v43, v44, a4);
          v52 = -1;
          sub_29EC30((__int64)v51, *(double *)a4.m128_u64);
          sub_29EC30((__int64)v50, *(double *)a4.m128_u64);
          sub_29EC30((__int64)v47, *(double *)a4.m128_u64);
          sub_29EC30((__int64)&v48, *(double *)a4.m128_u64);
        }
      }
      clear_tinfo_t();
    }
  }
  if ( a3 )
  {
    v15 = *(_DWORD *)(a3 + 8);
    if ( v15 == 2 || (unsigned int)(v15 - 22) <= 9 )
    {
      v16 = sub_254FE0(*(_QWORD *)(a3 + 24));
      if ( a2 != v16 )
      {
        v21 = *a1;
        v49 = v16;
        v48 = 6;
        sub_2A0060((__int64)&v48, v21, v17, v18, v19, v20, *(double *)a4.m128_u64);
        v50[0] = 0;
        sub_29F770((__int64)v50, (unsigned int *)v46, *(double *)a4.m128_u64);
        v51[0] = 0;
        sub_29F770((__int64)v51, (unsigned int *)&v48, *(double *)a4.m128_u64);
        v52 = 2;
        sub_2A8310((__int64)a1, (__int64)v50, 0, v22, v23, v24, a4);
        v52 = -1;
        sub_29EC30((__int64)v51, *(double *)a4.m128_u64);
        sub_29EC30((__int64)v50, *(double *)a4.m128_u64);
        sub_29EC30((__int64)&v48, *(double *)a4.m128_u64);
      }
      v25 = sub_254FE0(*(_QWORD *)(a3 + 32));
      if ( *(_QWORD *)(a3 + 32) != a2 )
      {
        v30 = *a1;
        v49 = v25;
        v48 = 6;
        sub_2A0060((__int64)&v48, v30, v26, v27, v28, v29, *(double *)a4.m128_u64);
        v50[0] = 0;
        sub_29F770((__int64)v50, (unsigned int *)v46, *(double *)a4.m128_u64);
        v51[0] = 0;
        sub_29F770((__int64)v51, (unsigned int *)&v48, *(double *)a4.m128_u64);
        v52 = 2;
        sub_2A8310((__int64)a1, (__int64)v50, 0, v31, v32, v33, a4);
        v52 = -1;
        sub_29EC30((__int64)v51, *(double *)a4.m128_u64);
        sub_29EC30((__int64)v50, *(double *)a4.m128_u64);
        sub_29EC30((__int64)&v48, *(double *)a4.m128_u64);
      }
    }
  }
  sub_29EC30((__int64)v46, *(double *)a4.m128_u64);
  return v53 - __readfsqword(0x28u);
}

