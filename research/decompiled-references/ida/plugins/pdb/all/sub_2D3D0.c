__int64 __fastcall sub_2D3D0(__int128 a1, __int64 (__fastcall **a2)())
{
  int v2; // r8d
  __int64 (__fastcall *v4)(__int64, __int64 *); // rax
  __int64 *v5; // rax
  __int64 v6; // r13
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v10; // [rsp+8h] [rbp-170h] BYREF
  _QWORD v11[5]; // [rsp+10h] [rbp-168h] BYREF
  __int16 v12; // [rsp+38h] [rbp-140h]
  __int128 v13; // [rsp+40h] [rbp-138h]
  __int64 v14; // [rsp+50h] [rbp-128h]
  __int64 v15; // [rsp+58h] [rbp-120h]
  int v16; // [rsp+60h] [rbp-118h]
  __int64 v17; // [rsp+68h] [rbp-110h]
  int v18; // [rsp+70h] [rbp-108h]
  __int64 v19; // [rsp+78h] [rbp-100h]
  int v20; // [rsp+80h] [rbp-F8h]
  __int64 v21; // [rsp+88h] [rbp-F0h]
  int v22; // [rsp+90h] [rbp-E8h]
  __int64 v23; // [rsp+98h] [rbp-E0h]
  __int64 (__fastcall **v24)(); // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-D0h]
  __m128i si128; // [rsp+B0h] [rbp-C8h]
  __int64 (__fastcall **v27)(); // [rsp+C0h] [rbp-B8h]
  __int16 v28; // [rsp+C8h] [rbp-B0h]
  __int128 v29; // [rsp+D0h] [rbp-A8h]
  __int64 v30; // [rsp+E0h] [rbp-98h]
  __int64 v31; // [rsp+E8h] [rbp-90h]
  int v32; // [rsp+F0h] [rbp-88h]
  __int64 v33; // [rsp+F8h] [rbp-80h]
  int v34; // [rsp+100h] [rbp-78h]
  __int64 v35; // [rsp+108h] [rbp-70h]
  int v36; // [rsp+110h] [rbp-68h]
  __int64 v37; // [rsp+118h] [rbp-60h]
  int v38; // [rsp+120h] [rbp-58h]
  __int64 v39; // [rsp+128h] [rbp-50h]
  unsigned __int64 v40; // [rsp+138h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 332);
  v40 = __readfsqword(0x28u);
  if ( v2 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(**((_QWORD **)&a1 + 1) + 112LL);
    if ( v4 == sub_2D0F0 )
    {
      v5 = (__int64 *)sub_2CEC0(*(__int64 **)(*((_QWORD *)&a1 + 1) + 16LL), 0x8000000, 0x8000000u, 0x8000000);
      if ( v5 )
      {
        v6 = *v5;
        v10 = *v5;
LABEL_5:
        v7 = (unsigned __int64)a2 + v6;
        goto LABEL_6;
      }
    }
    else if ( !(unsigned int)v4(*((_QWORD *)&a1 + 1), &v10) )
    {
      v6 = v10;
      goto LABEL_5;
    }
    v7 = -1;
LABEL_6:
    v8 = peek_auto_queue((char *)a2 + 1, 30);
    v13 = 0;
    v11[0] = a2;
    v11[1] = 0;
    v11[2] = 512;
    v11[3] = -1;
    v11[4] = 0;
    v12 = 0;
    v14 = 0xFFFFFFFFLL;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    find_func_bounds(v11, 1);
    if ( v8 < v7
      || (v25 = v7,
          v24 = a2,
          v27 = nullptr,
          v28 = 0,
          v30 = 0xFFFFFFFFLL,
          v31 = 0,
          v32 = 0,
          v33 = 0,
          v34 = 0,
          v35 = 0,
          v36 = 0,
          v37 = 0,
          v38 = 0,
          v39 = 0,
          si128 = _mm_load_si128((const __m128i *)&xmmword_94040),
          v29 = 0,
          !(unsigned __int8)add_func_ex(&v24)) )
    {
      v24 = a2;
      v25 = -1;
      si128.m128i_i64[0] = 512;
      si128.m128i_i64[1] = -1;
      v27 = nullptr;
      v28 = 0;
      v30 = 0xFFFFFFFFLL;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v29 = 0;
      add_func_ex(&v24);
    }
    si128 = (__m128i)a1;
    *(_QWORD *)&a1 = *(_QWORD *)(a1 + 320);
    v24 = off_A9E68;
    v27 = a2;
    v25 = *((_QWORD *)&a1 + 1);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 16LL))(
      a1,
      *((_QWORD *)&a1 + 1),
      0,
      &v24);
    return v40 - __readfsqword(0x28u);
  }
  if ( !(unsigned int)create_insn(a2, 0) )
    return v40 - __readfsqword(0x28u);
  auto_mark_range(a2, (char *)a2 + 1, 20);
  return auto_mark_range(a2, (char *)a2 + 1, 30);
}

