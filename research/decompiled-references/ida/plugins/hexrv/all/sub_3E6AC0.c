__int64 __fastcall sub_3E6AC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  unsigned int v6; // r15d
  unsigned int v11; // eax
  int v12; // edx
  int *v13; // rax
  int v14; // esi
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v24[6]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-98h] BYREF
  __int64 v26; // [rsp+58h] [rbp-90h]
  __int64 v27; // [rsp+60h] [rbp-88h] BYREF
  __m128i v28; // [rsp+68h] [rbp-80h] BYREF
  __int64 v29[2]; // [rsp+80h] [rbp-68h] BYREF
  __int64 *v30; // [rsp+90h] [rbp-58h] BYREF
  __int128 v31; // [rsp+98h] [rbp-50h]
  unsigned __int64 v32; // [rsp+A8h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( a3 || !(unsigned __int8)sub_3342E0((unsigned __int64)&v22, &v23, a2) )
  {
    return 0;
  }
  else
  {
    sub_3340B0((__int64)v24, a2, v22, v23);
    LOBYTE(v11) = sub_605B0(v24, **(_DWORD **)(a1 + 680));
    v6 = v11;
    if ( (_BYTE)v11 && (v12 = sub_60820(v24, **(_DWORD **)(a1 + 680)), *(_DWORD *)(a1 + 692) >= v12) )
    {
      v13 = *(int **)(a1 + 680);
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v14 = *v13;
      v29[0] = 0;
      v29[1] = 0;
      sub_5FB00(v29, v14, v12);
      v30 = nullptr;
      v31 = 0;
      sub_5FF00(&v25, v29);
      sub_311BB0(&v27, &v30);
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      qfree();
      sub_36E310(a2);
      v15 = sub_11E770((__int64)&v25, a5);
      v16 = v27;
      if ( v15 )
      {
        v17 = *(_QWORD *)a5;
        v18 = _mm_loadu_si128(&v28);
        *(_QWORD *)a5 = v25;
        v25 = v17;
        v19 = *(_QWORD *)(a5 + 8);
        *(_QWORD *)(a5 + 8) = v26;
        v20 = *(_QWORD *)(a5 + 32);
        v26 = v19;
        v21 = *(_QWORD *)(a5 + 16);
        *(__m128i *)(a5 + 24) = v18;
        *(_QWORD *)(a5 + 16) = v16;
        v16 = v21;
        v27 = v21;
        v28.m128i_i64[1] = v20;
        *a6 = 1;
      }
      if ( v16 )
      {
        v28.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
    }
    else
    {
      v6 = 0;
    }
    if ( v24[2] )
    {
      v24[3] = 0;
      qfree();
    }
    qfree();
  }
  return v6;
}

