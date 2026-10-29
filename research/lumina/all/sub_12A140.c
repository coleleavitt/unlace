unsigned __int64 __fastcall sub_12A140(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        void (__fastcall *a5)(__int64 *, __int128 *, _QWORD, _QWORD),
        unsigned int a6)
{
  __int64 v6; // r10
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v12; // rbp
  __m128i *v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  int v19; // [rsp+1Ch] [rbp-12Ch] BYREF
  __int128 v20; // [rsp+20h] [rbp-128h] BYREF
  __int128 v21; // [rsp+30h] [rbp-118h]
  __int128 v22; // [rsp+40h] [rbp-108h]
  __int128 v23; // [rsp+50h] [rbp-F8h]
  __int64 v24; // [rsp+60h] [rbp-E8h]
  __int128 v25; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v26; // [rsp+80h] [rbp-C8h]
  __int128 v27; // [rsp+90h] [rbp-B8h]
  __int128 v28; // [rsp+A0h] [rbp-A8h]
  __int64 v29; // [rsp+B0h] [rbp-98h]
  __int128 v30; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v31; // [rsp+D0h] [rbp-78h]
  __int128 v32; // [rsp+E0h] [rbp-68h]
  __int128 v33; // [rsp+F0h] [rbp-58h]
  __int64 v34; // [rsp+100h] [rbp-48h]
  unsigned __int64 v35; // [rsp+108h] [rbp-40h]

  v6 = a3;
  v8 = 0;
  v9 = *a2;
  v35 = __readfsqword(0x28u);
  v19 = 0;
  v12 = *a1;
  v29 = 0;
  v34 = 0;
  v25 = 0;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( v9 )
  {
    v13 = sub_DD6E0(v12, v9, 0, nullptr);
    v6 = a3;
    v8 = (__int64)v13;
  }
  if ( !*(_BYTE *)(v12 + 103) )
  {
    *(_QWORD *)&v26 = v8;
    LOBYTE(v20) = 44;
    LOBYTE(v25) = 57;
    *(_QWORD *)&v21 = &v25;
    LOBYTE(v30) = 55;
    *((_QWORD *)&v21 + 1) = &v30;
    v15 = *(_QWORD *)(*(_QWORD *)v6 + 8LL);
    v16 = *(_QWORD *)(*(_QWORD *)v6 + 32LL);
    *(_QWORD *)&v31 = v8;
    *((_QWORD *)&v26 + 1) = v15;
    *((_QWORD *)&v31 + 1) = v16;
    v17 = sub_128BB0((__int64)a1, v8, &v19, 0.0);
    sub_C4470((char *)v8, v17);
    if ( a5 )
    {
      a5(a1, &v20, a4, a6);
    }
    else
    {
      *(_DWORD *)(v8 + 4) |= 1u;
      sub_1257D0((__int64)a1, (unsigned __int8 *)&v20, a4, 0.0);
    }
    if ( v19 )
      sub_CEFE0((__int64)a1, v19);
  }
  if ( v8 )
    sub_D7720(v12, v8);
  return __readfsqword(0x28u) ^ v35;
}
