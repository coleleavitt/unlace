__int64 __fastcall sub_20C080(__int64 a1, __int64 a2, const __m128i *a3, double a4, __m128 a5, __m128 a6)
{
  __int64 v6; // rbx
  char v9; // r13
  int v10; // eax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rbp
  _QWORD *v14; // r15
  __m128i *v15; // rax
  __m128i *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // esi
  unsigned int i; // r14d
  const __m128i *v22; // r8
  int v23; // r9d
  __int32 v24; // ecx
  _QWORD *v25; // rax
  unsigned __int64 v26; // rsi
  char v27; // cl
  __int64 *v28; // rsi
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-150h]
  __int64 *v35; // [rsp+10h] [rbp-148h]
  __int32 v36; // [rsp+10h] [rbp-148h]
  __m128i *v37; // [rsp+20h] [rbp-138h]
  __m128i v38; // [rsp+30h] [rbp-128h] BYREF
  __int64 v39; // [rsp+40h] [rbp-118h] BYREF
  __int64 v40; // [rsp+48h] [rbp-110h]
  __m128i v41; // [rsp+50h] [rbp-108h] BYREF
  int v42; // [rsp+60h] [rbp-F8h]
  __int64 v43[3]; // [rsp+70h] [rbp-E8h] BYREF
  char v44; // [rsp+88h] [rbp-D0h]
  __int64 v45; // [rsp+90h] [rbp-C8h]
  _QWORD *v46; // [rsp+98h] [rbp-C0h]
  _QWORD v47[5]; // [rsp+A0h] [rbp-B8h] BYREF
  char v48; // [rsp+C8h] [rbp-90h]
  int v49; // [rsp+D0h] [rbp-88h]
  __int64 v50; // [rsp+E0h] [rbp-78h]
  __int64 v51; // [rsp+E8h] [rbp-70h]
  __int64 *v52; // [rsp+F0h] [rbp-68h]
  __int128 v53; // [rsp+F8h] [rbp-60h]
  __int64 v54; // [rsp+108h] [rbp-50h]
  unsigned __int64 v55; // [rsp+118h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( *(int *)(a1 + 312) <= 7 )
  {
    if ( !under_debugger )
      sub_3835A0(51938);
    BUG();
  }
  if ( *(_DWORD *)a2 == 1 && (v6 = a1, (v9 = sub_1C2210(a2, a1, *(unsigned int *)(a2 + 88))) != 0) )
  {
    v10 = *(_DWORD *)(a2 + 88);
    v11 = _mm_loadu_si128(a3);
    v38 = 0u;
    v42 = v10;
    v41 = v11;
    sub_20BEE0(&v38, (_QWORD *)a1, (int *)a2, *(double *)v11.m128i_i64, a5, a6);
    v43[0] = a2;
    v12 = sub_20BD60(&v38, (int *)a2);
    v13 = v12 + 40;
    v14 = (_QWORD *)(v12 + 24);
    v15 = sub_20B470(v12 + 40, &v41, *(double *)v11.m128i_i64, a5, a6);
    if ( v15 )
    {
      v16 = (__m128i *)v14[2];
      if ( v15 == v16 )
      {
        v34 = *(_QWORD *)(a1 + 520);
        v36 = v15[1].m128i_i32[0];
        v31 = v14[3];
        if ( v14[4] < (unsigned __int64)(v31 + 1) )
        {
          v33 = qvector_reserve();
          v14[2] = v33;
          v31 = v14[3];
          v16 = (__m128i *)v33;
        }
        v37 = v16;
        memmove(&v16[1].m128i_u64[1], v16, 24 * v31);
        v37->m128i_i64[0] = v34;
        v37->m128i_i64[1] = 0;
        v37[1].m128i_i32[0] = v36;
        v32 = (__int64 *)v14[2];
        ++v14[3];
        v35 = v32;
      }
      else
      {
        v35 = &v15[-2].m128i_i64[1];
      }
      memset(&v47[1], 0, 32);
      v47[0] = &unk_4E7FE0;
      v48 = 0;
      v49 = 0;
      copy_argloc();
      v17 = *(_QWORD *)(a2 + 16);
      v51 = v13;
      v18 = *(_QWORD *)(a1 + 784);
      v53 = 0;
      v50 = v17;
      v47[0] = off_4D9650;
      v54 = 0;
      v52 = v35;
      v19 = a3->m128i_i64[0];
      v39 = 0;
      v20 = *(_DWORD *)(v19 + 72);
      v40 = 0;
      sub_6F730(v18, v20, &v39);
      sub_63B90(&v39, *(_DWORD *)(a3->m128i_i64[0] + 72));
      for ( i = sub_64360(&v39, 0); ; i = sub_64360(&v39, i + 1) )
      {
        if ( i == (_DWORD)v40 )
        {
          LODWORD(v6) = 0;
          goto LABEL_26;
        }
        if ( i >= *(_DWORD *)(v6 + 64) )
          sub_20A840();
        v22 = *(const __m128i **)(*(_QWORD *)(v6 + 528) + 8LL * i);
        v23 = *(_DWORD *)(*v52 + 72);
        v24 = v22[4].m128i_i32[2];
        BYTE1(v54) = v24 != v23;
        v25 = *(_QWORD **)v51;
        v26 = *(_QWORD *)v51 + 24LL * *(_QWORD *)(v51 + 8);
        if ( (unsigned __int64)(v52 + 3) < v26 && v52[3] == *v52 )
        {
          v25 = (_QWORD *)v52[4];
          v27 = v9;
        }
        else if ( v24 == v23 || v25 == (_QWORD *)v26 )
        {
LABEL_23:
          v25 = nullptr;
          v27 = 0;
        }
        else
        {
          while ( v24 != *(_DWORD *)(*v25 + 72LL) )
          {
            v25 += 3;
            if ( v25 == (_QWORD *)v26 )
              goto LABEL_23;
          }
          if ( v25 )
          {
            v25 = (_QWORD *)v25[1];
            v27 = v9;
          }
          else
          {
            v27 = 0;
          }
        }
        *((_QWORD *)&v53 + 1) = v25;
        LOBYTE(v54) = v27;
        BYTE3(v54) = 0;
        sub_11EFF0(v22, (__int64)v47);
        if ( HIDWORD(v54) )
          break;
      }
      HIDWORD(v54) = 0;
      v43[1] = 0;
      v28 = *(__int64 **)(v6 + 784);
      v44 = 0;
      v52 = v35 + 3;
      v43[0] = (__int64)off_4D9680;
      v29 = a3->m128i_i64[0];
      v43[2] = 0;
      v45 = v6;
      v46 = v47;
      v30 = sub_6EFD0(v43, v28, *(_DWORD *)(v29 + 72), 0);
      v43[0] = (__int64)off_4D61D8;
      LOBYTE(v6) = v30 != 0;
      qfree();
LABEL_26:
      qfree();
      v47[0] = &unk_4E7FE0;
      cleanup_argloc();
    }
    else
    {
      LODWORD(v6) = 0;
    }
    sub_20B640(v38.m128i_i64);
  }
  else
  {
    LODWORD(v6) = 0;
  }
  return (unsigned int)v6;
}

