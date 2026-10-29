__int64 __fastcall sub_33FC0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v7; // rdi
  __int64 generic_linput; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // [rsp+8h] [rbp-3E0h]
  __int64 v17; // [rsp+8h] [rbp-3E0h]
  __int64 v18; // [rsp+10h] [rbp-3D8h]
  __m128i si128; // [rsp+20h] [rbp-3C8h] BYREF
  __int64 v20; // [rsp+30h] [rbp-3B8h]
  int v21; // [rsp+38h] [rbp-3B0h]
  char v22; // [rsp+3Ch] [rbp-3ACh]
  _QWORD v23[66]; // [rsp+40h] [rbp-3A8h] BYREF
  __int64 v24; // [rsp+250h] [rbp-198h]
  __int128 v25; // [rsp+258h] [rbp-190h]
  __int64 v26; // [rsp+268h] [rbp-180h]
  __int128 v27; // [rsp+270h] [rbp-178h]
  __int64 v28; // [rsp+280h] [rbp-168h]
  __int128 v29; // [rsp+288h] [rbp-160h]
  __int64 v30; // [rsp+298h] [rbp-150h]
  __int128 v31; // [rsp+2A0h] [rbp-148h]
  __int64 v32; // [rsp+2B0h] [rbp-138h]
  __int128 v33; // [rsp+2B8h] [rbp-130h]
  __int64 v34; // [rsp+2C8h] [rbp-120h]
  __int128 v35; // [rsp+2D0h] [rbp-118h]
  __int64 v36; // [rsp+2E0h] [rbp-108h]
  __int128 v37; // [rsp+2E8h] [rbp-100h]
  __int64 v38; // [rsp+2F8h] [rbp-F0h]
  __int64 v39; // [rsp+300h] [rbp-E8h]
  __int128 v40; // [rsp+308h] [rbp-E0h]
  __int64 v41; // [rsp+318h] [rbp-D0h]
  __int128 v42; // [rsp+320h] [rbp-C8h]
  __int64 v43; // [rsp+330h] [rbp-B8h]
  __int64 v44; // [rsp+338h] [rbp-B0h]
  __int64 v45; // [rsp+340h] [rbp-A8h]
  __int128 v46; // [rsp+348h] [rbp-A0h]
  __int128 v47; // [rsp+358h] [rbp-90h]
  __int64 v48; // [rsp+368h] [rbp-80h]
  __int64 v49; // [rsp+370h] [rbp-78h]
  __int128 v50; // [rsp+378h] [rbp-70h]
  __int128 v51; // [rsp+388h] [rbp-60h]
  int v52; // [rsp+398h] [rbp-50h]
  char v53; // [rsp+39Ch] [rbp-4Ch]
  unsigned __int64 v54; // [rsp+3A8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  if ( a3 )
  {
    v7 = operator new(0x28u);
    *(_QWORD *)v7 = &off_8C210;
    *(_QWORD *)(v7 + 24) = a3;
    *(_QWORD *)(v7 + 32) = a1;
    *(_QWORD *)(v7 + 8) = 0xFFFFFFFFLL;
    *(_DWORD *)(v7 + 16) = 0;
    generic_linput = create_generic_linput();
    if ( generic_linput )
    {
      v21 = 8;
      v20 = -1;
      v22 = 1;
      si128 = _mm_load_si128((const __m128i *)&xmmword_77450);
      v9 = sub_14B40();
      v10 = si128.m128i_i64[0];
      if ( v9 == 8 )
        v10 = si128.m128i_i64[1];
      else
        v9 = 4;
      v20 = v10;
      v21 = v9;
      v23[0] = &si128;
      v23[1] = generic_linput;
      v24 = 0;
      v26 = 0;
      v28 = 0;
      v30 = 0;
      v32 = 0;
      v34 = 0;
      v36 = 0;
      v38 = 0;
      v39 = 0;
      v41 = 0;
      v43 = 0;
      v44 = -1;
      v45 = 0;
      v48 = 0;
      v49 = 0;
      v52 = 0;
      v53 = 0;
      v25 = 0;
      v27 = 0;
      v29 = 0;
      v31 = 0;
      v33 = 0;
      v35 = 0;
      v37 = 0;
      v40 = 0;
      v42 = 0;
      v46 = 0;
      v47 = 0;
      v50 = 0;
      v51 = 0;
      v3 = sub_33380((__int64)v23, 65, nullptr);
      if ( (_BYTE)v3 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && (int)v25 > 0 )
        {
          v11 = 0;
          v16 = *(_QWORD *)(a1 + 152);
          v18 = 32 * ((unsigned int)(v25 - 1) + 1LL);
          do
          {
            (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(
              a2,
              *(_QWORD *)(v11 + v24) + v16,
              *(_QWORD *)(v11 + v24) + v16 + *(_QWORD *)(v11 + v24 + 8));
            v11 += 32;
          }
          while ( v18 != v11 );
        }
        if ( (int)v37 <= 0 )
          goto LABEL_19;
        v12 = 0;
        v13 = 56 * ((unsigned int)(v37 - 1) + 1LL);
        while ( 1 )
        {
          v14 = *(_QWORD *)(v36 + v12 + 16);
          if ( v14 )
          {
            v17 = v13;
            v15 = sub_33FC0(a1, a2, a3 + v14);
            v13 = v17;
            if ( !v15 )
              break;
          }
          v12 += 56;
          if ( v12 == v13 )
            goto LABEL_19;
        }
      }
      v3 = 0;
LABEL_19:
      close_linput();
      sub_28110((__int64)v23);
      return v3;
    }
  }
  return 0;
}

