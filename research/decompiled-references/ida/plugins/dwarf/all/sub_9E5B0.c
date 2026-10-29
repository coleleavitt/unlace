unsigned __int64 __fastcall sub_9E5B0(const __m128i **a1, __int64 a2)
{
  __m128i *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __m128i *v7; // [rsp+8h] [rbp-280h] BYREF
  const __m128i *v8; // [rsp+10h] [rbp-278h] BYREF
  __int128 v9; // [rsp+18h] [rbp-270h]
  __int64 v10[4]; // [rsp+30h] [rbp-258h] BYREF
  __int128 v11; // [rsp+50h] [rbp-238h]
  __int128 v12; // [rsp+60h] [rbp-228h]
  __int64 v13; // [rsp+70h] [rbp-218h]
  __int128 v14; // [rsp+78h] [rbp-210h]
  __int64 v15; // [rsp+88h] [rbp-200h]
  __int128 v16; // [rsp+90h] [rbp-1F8h]
  __int64 v17; // [rsp+C8h] [rbp-1C0h]
  __int128 v18; // [rsp+D0h] [rbp-1B8h]
  __int64 v19; // [rsp+E0h] [rbp-1A8h]
  __int128 v20; // [rsp+E8h] [rbp-1A0h]
  __int64 v21; // [rsp+104h] [rbp-184h]
  __int64 v22; // [rsp+10Ch] [rbp-17Ch]
  __int64 v23; // [rsp+114h] [rbp-174h]
  unsigned __int64 v24; // [rsp+11Ch] [rbp-16Ch]
  __int64 v25; // [rsp+128h] [rbp-160h]
  __int64 v26[4]; // [rsp+140h] [rbp-148h] BYREF
  __int128 v27; // [rsp+160h] [rbp-128h]
  __int128 v28; // [rsp+170h] [rbp-118h]
  __int64 v29; // [rsp+180h] [rbp-108h]
  __int128 v30; // [rsp+188h] [rbp-100h]
  __int64 v31; // [rsp+198h] [rbp-F0h]
  __int128 v32; // [rsp+1A0h] [rbp-E8h]
  __int64 v33; // [rsp+1D8h] [rbp-B0h]
  __int128 v34; // [rsp+1E0h] [rbp-A8h]
  __int64 v35; // [rsp+1F0h] [rbp-98h]
  __int128 v36; // [rsp+1F8h] [rbp-90h]
  __int64 v37; // [rsp+214h] [rbp-74h]
  __int64 v38; // [rsp+21Ch] [rbp-6Ch]
  __int64 v39; // [rsp+224h] [rbp-64h]
  unsigned __int64 v40; // [rsp+22Ch] [rbp-5Ch]
  __int64 v41; // [rsp+238h] [rbp-50h]
  unsigned __int64 v42; // [rsp+248h] [rbp-40h]

  v2 = (__m128i *)*a1;
  v42 = __readfsqword(0x28u);
  v3 = operator new(0x20u);
  *(_DWORD *)(v3 + 8) = 1;
  *(_QWORD *)v3 = off_C9528;
  v10[0] = v3;
  *(_OWORD *)(v3 + 16) = 0;
  v10[3] = 0;
  v13 = 0;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v25 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0x80000000LL;
  v24 = 0xFFFFFFFF00000000LL;
  v11 = 0;
  v12 = 0;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  v20 = 0;
  if ( (unsigned __int8)sub_9BA70(a1, v10) )
    v2 = (__m128i *)v10;
  v7 = v2;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = off_C9528;
  *(_DWORD *)(v4 + 8) = 1;
  v26[0] = v4;
  *(_OWORD *)(v4 + 16) = 0;
  v26[3] = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v41 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0x80000000LL;
  v40 = 0xFFFFFFFF00000000LL;
  v27 = 0;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v8 = (const __m128i *)sub_9AFA0((__int64 *)&v7);
  *(_QWORD *)&v9 = v5;
  if ( sub_98E20((__int64 *)&v8, v26) )
    v2 = (__m128i *)v26;
  v9 = 0;
  v8 = nullptr;
  sub_9D820(a2, v2->m128i_i64, &qword_D0910, &v8);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  sub_1B750((__int64)v26);
  sub_1B750((__int64)v10);
  return v42 - __readfsqword(0x28u);
}

