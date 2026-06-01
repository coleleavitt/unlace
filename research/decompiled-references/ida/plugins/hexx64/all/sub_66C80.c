__int64 __fastcall sub_66C80(__int64 a1, double a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 *v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 *v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // rdi
  __int64 *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-40h]
  __int64 v21; // [rsp+8h] [rbp-40h]
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+8h] [rbp-40h]
  __int64 v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  result = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)result )
  {
    if ( !under_debugger )
      sub_383060(0xC50Cu, a2);
    BUG();
  }
  v4 = *(_QWORD *)a1;
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = (__int64 *)(v4 + 24 * v6);
        v8 = *v7;
        if ( *v7 )
          break;
LABEL_18:
        if ( v5 == ++v6 )
          goto LABEL_19;
      }
      v9 = *(_QWORD *)v8;
      if ( !v7[1] )
      {
        *(_QWORD *)v8 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 3LL;
        *(__m128i *)(*v7 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v7, (__m128i)(unsigned __int64)*v7);
        *(_QWORD *)*v7 &= ~1uLL;
        *(_QWORD *)*v7 |= 2uLL;
LABEL_15:
        if ( *v7 )
          qfree(*v7);
        v4 = *(_QWORD *)a1;
        goto LABEL_18;
      }
      v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_28:
        *(_QWORD *)v8 = v8 & 0xFFFFFFFFFFFFFFFCLL | v9 & 3;
        *(__m128i *)(*v7 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v7, (__m128i)(unsigned __int64)*v7);
        *(_QWORD *)*v7 &= ~1uLL;
        *(_QWORD *)*v7 |= 2uLL;
        v7[1] = 0;
        goto LABEL_15;
      }
      v11 = *(_QWORD *)(v10 + 8);
      if ( (*(_BYTE *)v11 & 2) != 0 )
      {
        v15 = *(_QWORD *)(v10 + 16);
        if ( (*(_BYTE *)v15 & 2) != 0 )
        {
          v16 = *(_QWORD *)(v10 + 24);
          if ( !v16 )
            goto LABEL_24;
          goto LABEL_23;
        }
        goto LABEL_35;
      }
      v12 = *(__int64 **)(v11 + 8);
      if ( (*(_BYTE *)v12 & 2) != 0 )
      {
        v13 = *(__int64 **)(v11 + 16);
        if ( (*(_BYTE *)v13 & 2) != 0 )
        {
LABEL_11:
          v14 = *(_QWORD *)(v11 + 24);
          if ( v14 )
          {
            *(_QWORD *)(v11 + 32) = 0;
            v20 = v11;
            qfree(v14);
            v11 = v20;
          }
          *(_QWORD *)v11 |= 2uLL;
LABEL_32:
          if ( v11 )
            qfree(v11);
          v15 = *(_QWORD *)(v10 + 16);
          if ( (*(_BYTE *)v15 & 2) != 0 )
          {
LABEL_40:
            if ( (*(_BYTE *)v10 & 2) != 0 )
              goto LABEL_25;
            v16 = *(_QWORD *)(v10 + 24);
            if ( !v16 )
            {
LABEL_24:
              *(_QWORD *)v10 |= 2uLL;
LABEL_25:
              if ( v9 > 3 )
                qfree(v9 & 0xFFFFFFFFFFFFFFFCLL);
              v8 = *v7;
              v9 = *(_QWORD *)*v7;
              goto LABEL_28;
            }
LABEL_23:
            *(_QWORD *)(v10 + 32) = 0;
            qfree(v16);
            goto LABEL_24;
          }
LABEL_35:
          v17 = *(__int64 **)(v15 + 8);
          if ( (*(_BYTE *)v17 & 2) != 0 )
          {
            v18 = *(__int64 **)(v15 + 16);
            if ( (*(_BYTE *)v18 & 2) != 0 )
              goto LABEL_45;
          }
          else
          {
            v23 = v15;
            sub_66090(v17);
            v15 = v23;
            v18 = *(__int64 **)(v23 + 16);
            if ( (*(_BYTE *)v18 & 2) != 0 )
              goto LABEL_37;
          }
          v24 = v15;
          sub_66090(v18);
          v15 = v24;
LABEL_37:
          if ( (*(_BYTE *)v15 & 2) != 0 )
          {
LABEL_38:
            if ( v15 )
              qfree(v15);
            goto LABEL_40;
          }
LABEL_45:
          v19 = *(_QWORD *)(v15 + 24);
          if ( v19 )
          {
            *(_QWORD *)(v15 + 32) = 0;
            v25 = v15;
            qfree(v19);
            v15 = v25;
          }
          *(_QWORD *)v15 |= 2uLL;
          goto LABEL_38;
        }
      }
      else
      {
        v21 = *(_QWORD *)(v10 + 8);
        sub_66090(v12);
        v11 = v21;
        v13 = *(__int64 **)(v21 + 16);
        if ( (*(_BYTE *)v13 & 2) != 0 )
          goto LABEL_31;
      }
      v22 = v11;
      sub_66090(v13);
      v11 = v22;
LABEL_31:
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_32;
      goto LABEL_11;
    }
LABEL_19:
    *(_QWORD *)(a1 + 8) = 0;
    return qfree(v4);
  }
  return result;
}

