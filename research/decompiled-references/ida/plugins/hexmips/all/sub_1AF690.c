unsigned __int64 __fastcall sub_1AF690(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 *v3; // rbp
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r8
  unsigned __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+8h] [rbp-60h]
  __m128i si128; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v20 = __readfsqword(0x28u);
  v3 = *(unsigned __int64 **)a1;
  if ( 16 * v2 )
  {
    while ( 1 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_407240);
      if ( !(unsigned int)sub_3121C0(v3, &si128) )
        break;
      sub_1AF0D0(v3, a2);
LABEL_4:
      v3 += 2;
      if ( v3 == (unsigned __int64 *)(*(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8)) )
        return v20 - __readfsqword(0x28u);
      if ( *(unsigned __int64 **)a1 != v3 )
      {
        v5 = a2[1];
        if ( v5 )
        {
          v6 = v5 + 1;
          v7 = a2[1];
          v8 = *a2;
          --v5;
          if ( a2[2] >= v6 )
            goto LABEL_8;
        }
        else
        {
          v8 = *a2;
          v7 = 1;
          v6 = 2;
          if ( (unsigned __int64)a2[2] >= 2 )
            goto LABEL_8;
        }
        v17 = v7;
        v14 = qvector_reserve();
        v7 = v17;
        *a2 = v14;
        v8 = v14;
LABEL_8:
        a2[1] = v6;
        *(_BYTE *)(v8 + v5) = 44;
        *(_BYTE *)(*a2 + v7) = 0;
      }
    }
    v9 = a2[1];
    if ( v9 )
    {
      v10 = v9 + 5;
      v11 = v9 + 6;
      v12 = *a2;
      --v9;
      if ( a2[2] >= v11 )
      {
LABEL_11:
        a2[1] = v11;
        *(_BYTE *)(v12 + v10) = 0;
        v13 = *a2 + v9;
        *(_DWORD *)v13 = 1296845889;
        *(_WORD *)(v13 + 4) = 19781;
        goto LABEL_4;
      }
    }
    else
    {
      v12 = *a2;
      v11 = 7;
      v10 = 6;
      if ( (unsigned __int64)a2[2] >= 7 )
        goto LABEL_11;
    }
    v18 = v10;
    v15 = qvector_reserve();
    v10 = v18;
    *a2 = v15;
    v12 = v15;
    goto LABEL_11;
  }
  return v20 - __readfsqword(0x28u);
}

