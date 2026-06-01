unsigned __int64 __fastcall sub_31540(__int64 a1, __int64 a2, __int64 (*a3)())
{
  __int64 v4; // r13
  unsigned __int8 *v5; // rdx
  unsigned __int64 v6; // r12
  unsigned int v7; // r14d
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 (*v11)(); // rax
  __int64 v12; // [rsp+10h] [rbp-1D0h]
  __int64 v13; // [rsp+18h] [rbp-1C8h]
  __int64 v14; // [rsp+28h] [rbp-1B8h]
  __int64 v15; // [rsp+58h] [rbp-188h]
  __int64 v16; // [rsp+60h] [rbp-180h]
  unsigned __int8 *v17; // [rsp+68h] [rbp-178h]
  unsigned __int64 v18; // [rsp+70h] [rbp-170h]
  __int64 v19; // [rsp+78h] [rbp-168h]
  __int64 v20; // [rsp+80h] [rbp-160h]
  unsigned __int64 v21; // [rsp+88h] [rbp-158h]
  __int64 v22; // [rsp+90h] [rbp-150h]
  unsigned __int64 v23; // [rsp+98h] [rbp-148h]
  unsigned __int8 v24; // [rsp+A0h] [rbp-140h]
  unsigned __int64 v25; // [rsp+A8h] [rbp-138h]
  __int64 v26; // [rsp+B0h] [rbp-130h]
  _DWORD v27[3]; // [rsp+B8h] [rbp-128h] BYREF
  unsigned int v28; // [rsp+C4h] [rbp-11Ch]
  __m128i v29; // [rsp+C8h] [rbp-118h] BYREF
  unsigned __int8 *v30; // [rsp+D8h] [rbp-108h] BYREF
  __int128 v31; // [rsp+E0h] [rbp-100h]
  __m128i v32[2]; // [rsp+F8h] [rbp-E8h] BYREF
  __int128 v33; // [rsp+118h] [rbp-C8h]
  __int128 v34; // [rsp+128h] [rbp-B8h]
  __int128 v35; // [rsp+138h] [rbp-A8h]
  __m128i v36[2]; // [rsp+148h] [rbp-98h] BYREF
  __int128 v37; // [rsp+168h] [rbp-78h]
  __int128 v38; // [rsp+178h] [rbp-68h]
  __int128 v39; // [rsp+188h] [rbp-58h]
  unsigned __int64 v40; // [rsp+1A0h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v27[0] = 0;
  v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_63A38, (__m128i)(unsigned __int64)v27);
  if ( (unsigned __int8)sub_27280(a1, &v29, a3, (__int64 (*)())off_63A38) && v28 )
  {
    v30 = nullptr;
    v31 = 0;
    if ( !sub_31220(a1, (__int64 *)&v30, v27[2], v28, (__int64)"segment split info size", 0) )
    {
      sub_112F0((__int64)"Error loading segment split info\n");
      goto LABEL_20;
    }
    v4 = *(_QWORD *)(a1 + 448);
    v5 = v30;
    if ( v4 == -1 )
      v4 = 0;
    v6 = (unsigned __int64)&v30[v31];
    if ( *v30 == 127 )
    {
      v17 = v30 + 1;
      if ( !(unsigned __int8)unpack_xleb128() )
        goto LABEL_18;
      if ( v18 )
      {
        v15 = 0;
        do
        {
          memset(v32, 0, sizeof(v32));
          v33 = 0;
          v34 = 0;
          v35 = 0;
          memset(v36, 0, sizeof(v36));
          v37 = 0;
          v38 = 0;
          v39 = 0;
          if ( !(unsigned __int8)unpack_xleb128()
            || !(unsigned __int8)unpack_xleb128()
            || !(unsigned __int8)unpack_xleb128() )
          {
            goto LABEL_18;
          }
          if ( !(unsigned __int8)sub_1B010(a1, v32, v19) || !(unsigned __int8)sub_1B010(a1, v36, v20) )
            goto LABEL_20;
          if ( v21 )
          {
            v16 = 0;
            v13 = 0;
            while ( (unsigned __int8)unpack_xleb128() && (unsigned __int8)unpack_xleb128() )
            {
              v12 = v22 + v13;
              v13 += v22;
              if ( v23 )
              {
                v14 = 0;
                while ( (unsigned __int8)unpack_xleb128() && (unsigned __int8)unpack_xleb128() )
                {
                  v9 = 0;
                  v10 = 0;
                  if ( v25 )
                  {
                    while ( (unsigned __int8)unpack_xleb128() )
                    {
                      v10 += v26;
                      v11 = *(__int64 (**)())(*(_QWORD *)a2 + 8LL);
                      if ( v11 != sub_10C00
                        && ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v11)(
                             a2,
                             v24,
                             v10 + v33,
                             v37 + v12) )
                      {
                        goto LABEL_20;
                      }
                      if ( ++v9 >= v25 )
                        goto LABEL_46;
                    }
                    goto LABEL_18;
                  }
LABEL_46:
                  if ( ++v14 >= v23 )
                    goto LABEL_47;
                }
                goto LABEL_18;
              }
LABEL_47:
              if ( ++v16 >= v21 )
                goto LABEL_48;
            }
            goto LABEL_18;
          }
LABEL_48:
          ;
        }
        while ( ++v15 < v18 );
      }
      v5 = v17;
    }
    if ( (unsigned __int64)v5 >= v6 )
      goto LABEL_16;
LABEL_9:
    v7 = *v5;
    v17 = v5 + 1;
    if ( (unsigned __int64)(v5 + 1) >= v6 )
    {
LABEL_20:
      if ( !v30 )
        return v40 - __readfsqword(0x28u);
      goto LABEL_17;
    }
    if ( (unsigned __int8)unpack_xleb128() )
    {
      v8 = 0;
      while ( 1 )
      {
        v5 = v17;
        if ( (unsigned __int64)v17 >= v6 )
          break;
        if ( !v26 )
          goto LABEL_9;
        v8 += v26;
        if ( (**(unsigned int (__fastcall ***)(__int64, _QWORD, __int64))a2)(a2, v7, v4 + v8) )
          goto LABEL_20;
        if ( !(unsigned __int8)unpack_xleb128() )
          goto LABEL_18;
      }
LABEL_16:
      if ( !v30 )
        return v40 - __readfsqword(0x28u);
LABEL_17:
      *(_QWORD *)&v31 = 0;
      qfree();
      return v40 - __readfsqword(0x28u);
    }
LABEL_18:
    if ( (debug & 0x10) != 0 )
      sub_191F0(
        (__int64)"wrong uleb128/sleb128 encoding: %02X %02X %02X %02X %02X\n",
        *v17,
        v17[1],
        v17[2],
        v17[3],
        v17[4]);
    goto LABEL_20;
  }
  return v40 - __readfsqword(0x28u);
}

