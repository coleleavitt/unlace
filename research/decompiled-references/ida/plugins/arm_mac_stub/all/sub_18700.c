unsigned __int64 __fastcall sub_18700(__int64 a1, __int64 a2, __int64 a3, __int64 (*a4)())
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int8 *v8; // [rsp+0h] [rbp-78h]
  __int64 v9; // [rsp+8h] [rbp-70h]
  _DWORD v10[3]; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v11; // [rsp+1Ch] [rbp-5Ch]
  __m128i v12; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+38h] [rbp-40h]
  unsigned __int64 v15; // [rsp+48h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v10[0] = 0;
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_45BA0, (__m128i)(unsigned __int64)v10);
  if ( (unsigned __int8)sub_15C90(a1, &v12, (__int64 (*)())off_45BA0, a4) && v11 )
  {
    v14 = 0;
    v13 = 0;
    if ( sub_185D0(a1, (__int64 *)&v13, v10[2], v11, "load commands size", 0) )
    {
      v5 = *(_QWORD *)(a1 + 448);
      v6 = v13;
      v8 = (unsigned __int8 *)v13;
      if ( v5 == -1 )
        v5 = 0;
      v7 = v13 + v14;
      if ( v13 >= v13 + (unsigned __int64)v14 )
      {
LABEL_16:
        if ( !v6 )
          return v15 - __readfsqword(0x28u);
        goto LABEL_14;
      }
      while ( (unsigned __int8)unpack_xleb128() )
      {
        v5 += v9;
        (**(void (__fastcall ***)(__int64, __int64))a2)(a2, v5);
        if ( (unsigned __int64)v8 >= v7 )
        {
          v6 = v13;
          goto LABEL_16;
        }
      }
      if ( (debug[0] & 0x10) != 0 )
        sub_C7B0((__int64)"wrong uleb128/sleb128 encoding: %02X %02X %02X %02X %02X\n", *v8, v8[1], v8[2], v8[3], v8[4]);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    if ( !v13 )
      return v15 - __readfsqword(0x28u);
LABEL_14:
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v15 - __readfsqword(0x28u);
}

