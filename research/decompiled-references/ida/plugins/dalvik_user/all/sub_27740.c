__int64 __fastcall sub_27740(__int64 a1)
{
  int v2; // ecx
  unsigned int v3; // ebp
  int v4; // r8d
  int v5; // r9d
  int v6; // r12d
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // r12
  const __m128i *v13; // r15
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v18; // r10
  int v19; // eax
  _QWORD *v20; // rdi
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  signed __int64 v24; // rax
  __int32 v25; // edx
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // rdx
  struct _Unwind_Exception *v30; // rbx
  __int64 v31; // [rsp+8h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+10h] [rbp-A0h]
  __int64 v33; // [rsp+28h] [rbp-88h]
  __int64 v34; // [rsp+30h] [rbp-80h]
  __int64 v35; // [rsp+38h] [rbp-78h]
  __int128 v36; // [rsp+40h] [rbp-70h]
  __int128 v37; // [rsp+50h] [rbp-60h]
  __int128 v38; // [rsp+60h] [rbp-50h]
  unsigned __int64 v39; // [rsp+70h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v32 = 0;
  v31 = 0;
  v3 = sub_4A050(a1 + 864, &v31);
  if ( (_BYTE)v3 )
  {
    if ( (_QWORD)v32 )
    {
      v6 = 0;
      v7 = 0;
      v8 = 0;
      do
      {
        ++v6;
        v7 |= sub_26D40(a1, *(void **)(v31 + 8 * v8), v31, v2, v4, v5);
        v8 = v6;
      }
      while ( v6 < (unsigned __int64)v32 );
    }
    else
    {
      v7 = 0;
    }
    v9 = v31;
    if ( *(_QWORD *)(a1 + 1856) )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v12 = 40 * v11;
        v13 = (const __m128i *)(*(_QWORD *)(a1 + 1848) + 40 * v11);
        v14 = (_QWORD *)(v9 + 8 * v32);
        if ( v14 == (_QWORD *)v9 )
          goto LABEL_19;
        v15 = (_QWORD *)v9;
        while ( v13->m128i_i64[1] != *v15 )
        {
          if ( v14 == ++v15 )
            goto LABEL_19;
        }
        if ( v14 == v15 )
        {
LABEL_19:
          if ( !(unsigned __int8)sub_1AB70((_QWORD *)a1, v13->m128i_i32[0]) )
          {
            v34 = -1;
            v33 = 0xFFFFFFFFLL;
            v35 = 0;
            v36 = 0;
            v37 = 0;
            v38 = 0;
            set_debug_event_code();
            if ( (((HIDWORD(v35) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
            {
              v30 = (struct _Unwind_Exception *)sub_16810();
              free_debug_event();
              if ( v31 )
              {
                *(_QWORD *)&v32 = 0;
                qfree();
              }
              _Unwind_Resume(v30);
            }
            v19 = *(_DWORD *)(a1 + 656);
            LODWORD(v36) = -1;
            v20 = *(_QWORD **)(a1 + 168);
            LODWORD(v33) = v19;
            v21 = v13->m128i_i32[0];
            v34 = -1;
            HIDWORD(v33) = v21;
            v22 = *(_QWORD *)(a1 + 184);
            LOBYTE(v35) = 1;
            if ( v20 == (_QWORD *)(v22 - 72) )
            {
              sub_26BE0((_QWORD *)(a1 + 120));
            }
            else
            {
              v20[1] = -1;
              v20[2] = 0;
              *v20 = 0xFFFFFFFFLL;
              copy_debug_event();
              *(_QWORD *)(a1 + 168) += 72LL;
            }
            v7 = v3;
            free_debug_event();
            v18 = *(_QWORD *)(a1 + 1848);
            v13 = (const __m128i *)(v18 + v12);
          }
          if ( v13[1].m128i_i64[0] )
          {
            v13[1].m128i_i64[1] = 0;
            qfree();
            v18 = *(_QWORD *)(a1 + 1848);
          }
          v23 = *(_QWORD *)(a1 + 1856);
          v24 = 0xCCCCCCCCCCCCCCCDLL * ((v18 + 40 * v23 - (__int64)v13) >> 3) - 2;
          if ( v24 >= 0 )
          {
            do
            {
              v25 = v13[2].m128i_i32[2];
              v26 = _mm_loadu_si128(v13 + 4);
              v13 = (const __m128i *)((char *)v13 + 40);
              v13[2].m128i_i64[0] = 0;
              v13[-3].m128i_i32[2] = v25;
              v27 = v13->m128i_i64[1];
              v13[-1] = v26;
              v13[-2].m128i_i64[0] = v27;
              v28 = v13[1].m128i_i64[0];
              v13[1].m128i_i64[0] = 0;
              v13[-2].m128i_i64[1] = v28;
            }
            while ( v24-- != 0 );
            v23 = *(_QWORD *)(a1 + 1856);
          }
          v16 = v23 - 1;
          v9 = v31;
          *(_QWORD *)(a1 + 1856) = v16;
        }
        else
        {
          v16 = *(_QWORD *)(a1 + 1856);
          ++v10;
        }
        v11 = v10;
      }
      while ( v10 < v16 );
    }
  }
  else
  {
    v9 = v31;
    v7 = 0;
  }
  if ( v9 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  return v7;
}

