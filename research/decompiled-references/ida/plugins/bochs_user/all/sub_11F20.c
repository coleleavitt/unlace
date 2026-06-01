__int64 __fastcall sub_11F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r14d
  __int64 v6; // rsi
  char v7; // dl
  unsigned __int64 v8; // xmm0_8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // [rsp+1Ch] [rbp-9Ch] BYREF
  unsigned int v18; // [rsp+20h] [rbp-98h] BYREF
  __int64 v19; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v21[2]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v22; // [rsp+40h] [rbp-78h] BYREF
  int v23; // [rsp+48h] [rbp-70h] BYREF
  _QWORD *v24; // [rsp+50h] [rbp-68h]
  int *v25; // [rsp+58h] [rbp-60h]
  int *v26; // [rsp+60h] [rbp-58h]
  __int64 v27; // [rsp+68h] [rbp-50h]
  unsigned __int64 v28; // [rsp+78h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 184) )
  {
    *(_QWORD *)(a1 + 192) = 0;
    qfree();
    *(_QWORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 200) = 0;
  }
  v5 = callui(1197, "fs", &v18, a4);
  if ( (_BYTE)v5 && (int)callui(1108, &v19, *(unsigned int *)(a1 + 232), v18) > 0 && callui(1110, v19, &v17, 4) == 4 )
  {
    v6 = v17;
    v23 = 0;
    v24 = nullptr;
    v25 = &v23;
    v26 = &v23;
    v27 = 0;
    if ( v17 == -1 )
    {
      v13 = nullptr;
    }
    else
    {
      while ( callui(1110, v6, v21, 8) == 8 )
      {
        sub_11E00(&v22, &v17);
        if ( !v7 )
        {
          sub_EBD0((__int64)"Circular SEH record has been detected\n");
          break;
        }
        v16 = *(_QWORD *)(a1 + 192);
        v15 = *(_QWORD *)(a1 + 184);
        v8 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21[1]), _mm_cvtsi32_si128(v17)).m128i_u64[0];
        v9 = *(_QWORD *)(a1 + 200);
        v20 = v8;
        v10 = v16 + 1;
        if ( (unsigned __int64)&v20 < v15 || (unsigned __int64)&v20 >= v15 + 8 * v9 )
        {
          if ( v9 < v10 )
          {
            v12 = qvector_reserve();
            *(_QWORD *)(a1 + 184) = v12;
            v15 = v12;
            v16 = *(_QWORD *)(a1 + 192);
          }
          *(_QWORD *)(v15 + 8 * v16) = v20;
        }
        else
        {
          if ( v9 < v10 )
          {
            v14 = qvector_reserve();
            *(_QWORD *)(a1 + 184) = v14;
            v15 = v14;
            v16 = *(_QWORD *)(a1 + 192);
          }
          *(_QWORD *)(v15 + 8 * v16) = v8;
        }
        v6 = v21[0];
        ++*(_QWORD *)(a1 + 192);
        v17 = v6;
        if ( (_DWORD)v6 == -1 )
          break;
      }
      v13 = v24;
    }
    sub_E790(v13);
  }
  else
  {
    v5 = 0;
    sub_EB00((__int64)"Failed to build the SEH list for thread %08X", *(_DWORD *)(a1 + 232));
  }
  return v5;
}

