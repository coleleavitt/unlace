unsigned __int64 __fastcall sub_31350(__int64 a1, __int64 a2, __int64 a3, __int64 (*a4)())
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  __int64 (*v8)(); // rax
  unsigned __int8 *v9; // [rsp+0h] [rbp-78h]
  __int64 v10; // [rsp+8h] [rbp-70h]
  _DWORD v11[3]; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v12; // [rsp+1Ch] [rbp-5Ch]
  __m128i v13; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-40h]
  unsigned __int64 v16; // [rsp+48h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v11[0] = 0;
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_638F8, (__m128i)(unsigned __int64)v11);
  if ( !(unsigned __int8)sub_27280(a1, &v13, (__int64 (*)())off_638F8, a4) || !v12 )
    return v16 - __readfsqword(0x28u);
  v15 = 0;
  v14 = 0;
  if ( sub_31220(a1, (__int64 *)&v14, v11[2], v12, (__int64)"load commands size", 0) )
  {
    v5 = *(_QWORD *)(a1 + 448);
    v6 = v14;
    v9 = (unsigned __int8 *)v14;
    if ( v5 == -1 )
      v5 = 0;
    v7 = v14 + v15;
    if ( v14 >= v14 + (unsigned __int64)v15 )
    {
LABEL_18:
      if ( !v6 )
        return v16 - __readfsqword(0x28u);
      goto LABEL_16;
    }
    while ( (unsigned __int8)unpack_xleb128() )
    {
      v5 += v10;
      (**(void (__fastcall ***)(__int64, __int64))a2)(a2, v5);
      if ( (unsigned __int64)v9 >= v7 )
      {
        v6 = v14;
        goto LABEL_18;
      }
    }
    if ( (debug & 0x10) != 0 )
      sub_191F0((__int64)"wrong uleb128/sleb128 encoding: %02X %02X %02X %02X %02X\n", *v9, v9[1], v9[2], v9[3], v9[4]);
  }
  v8 = *(__int64 (**)())(*(_QWORD *)a2 + 8LL);
  if ( v8 == sub_113C0 )
    sub_112F0((__int64)"Error loading function starts info\n");
  else
    ((void (__fastcall *)(__int64))v8)(a2);
  if ( v14 )
  {
LABEL_16:
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v16 - __readfsqword(0x28u);
}

