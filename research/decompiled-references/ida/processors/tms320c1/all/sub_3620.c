unsigned __int64 __fastcall sub_3620(__int64 a1)
{
  __int64 selector; // [rsp+F0h] [rbp-C8h] BYREF
  __int128 v3; // [rsp+F8h] [rbp-C0h]
  __int128 v4; // [rsp+108h] [rbp-B0h]
  __int128 v5; // [rsp+118h] [rbp-A0h]
  __int128 v6; // [rsp+128h] [rbp-90h]
  __int128 v7; // [rsp+138h] [rbp-80h]
  __int128 v8; // [rsp+148h] [rbp-70h]
  __int128 v9; // [rsp+158h] [rbp-60h]
  __int128 v10; // [rsp+168h] [rbp-50h]
  unsigned __int64 v11; // [rsp+178h] [rbp-40h]
  unsigned __int64 v12; // [rsp+188h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v3 = -1;
  v4 = -1;
  v5 = -1;
  v6 = -1;
  v7 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = 0xFFFFFFFF00000003LL;
  find_free_chunk();
  allocate_selector();
  add_segm_ex();
  selector = allocate_selector();
  add_segm_ex();
  *(__m128 *)(a1 + 120) = _mm_loadh_ps((const double *)&selector);
  return v12 - __readfsqword(0x28u);
}

