__int64 __fastcall sub_4D200(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  char v17; // r15
  unsigned __int64 *v18; // rdx
  int v19; // eax
  __int64 v21; // [rsp+0h] [rbp-238h]
  __int64 v22; // [rsp+8h] [rbp-230h]
  __int64 v23; // [rsp+10h] [rbp-228h] BYREF
  __m128i si128; // [rsp+18h] [rbp-220h]
  __int128 v25; // [rsp+28h] [rbp-210h]
  __int64 v26; // [rsp+38h] [rbp-200h]
  __int64 v27; // [rsp+40h] [rbp-1F8h]
  __int64 v28; // [rsp+48h] [rbp-1F0h]
  __int64 v29; // [rsp+50h] [rbp-1E8h]
  __int64 v30; // [rsp+58h] [rbp-1E0h]
  __int64 v31; // [rsp+60h] [rbp-1D8h]
  __int64 v32; // [rsp+68h] [rbp-1D0h]
  __int64 v33; // [rsp+70h] [rbp-1C8h]
  __int128 v34; // [rsp+78h] [rbp-1C0h]
  __int128 v35; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-198h]
  __int64 v37; // [rsp+A8h] [rbp-190h]
  __int64 v38; // [rsp+B0h] [rbp-188h]
  char v39; // [rsp+B8h] [rbp-180h] BYREF
  unsigned __int64 v40; // [rsp+1F8h] [rbp-40h] BYREF

  v40 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(25, a2, a3, a4, a5, a6);
  v10 = 106;
  v11 = netnode_supfirst();
  if ( v11 == -1 )
    return v40 - __readfsqword(0x28u);
  v16 = v11;
  v17 = 0;
  while ( !(unsigned __int8)callui(27, v10, v12, v13, v14, v15, v21, v22, v23, si128.m128i_i64[0]) )
  {
    if ( (unsigned __int8)netnode_charval() != 2 )
    {
      if ( !v17 )
        sub_496E0((__int64)"Postponed purged byte analysis", v16);
      node2ea();
      show_auto();
      v36 = -1;
      v35 = -1;
      v18 = (unsigned __int64 *)&v39;
      v37 = 0;
      v38 = 0;
      do
      {
        *(_WORD *)v18 = 0;
        v18 += 5;
        *((_WORD *)v18 - 19) = 0;
        *((_WORD *)v18 - 18) = 0;
        *((_DWORD *)v18 - 2) = 0;
        *((_WORD *)v18 - 17) = 0;
        *((_OWORD *)v18 - 2) = 0;
        *(v18 - 2) = 0;
      }
      while ( &v40 != v18 );
      if ( (int)decode_insn() <= 0 )
        goto LABEL_20;
      v29 = 0xFFFFFFFFLL;
      v23 = 0x800000;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v30 = 0;
      v31 = 2;
      v32 = -1;
      v33 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_950A0);
      v25 = -1;
      v34 = 0;
      v19 = sub_4A880(a1, (__int64)&v23, &v35, 1);
      if ( v19 == 1 )
      {
        set_switch_info();
        create_switch_table();
      }
      else
      {
        if ( v19 != 2 )
        {
          if ( v33 )
          {
            HIDWORD(v22) = v19;
            *(_QWORD *)&v34 = 0;
            qfree();
            v19 = HIDWORD(v22);
          }
          if ( v19 )
            goto LABEL_15;
LABEL_20:
          netnode_supdel();
LABEL_16:
          v17 = 1;
          goto LABEL_17;
        }
        create_func_table();
      }
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree();
      }
LABEL_15:
      LOBYTE(v23) = 2;
      netnode_supset();
      goto LABEL_16;
    }
LABEL_17:
    v10 = v16;
    v16 = netnode_supnext();
    if ( v16 == -1 )
      break;
  }
  if ( !v17 )
    return v40 - __readfsqword(0x28u);
  return callui(24, 10, 0, &callui, callui, v15, a7, a8, a9, a10);
}
