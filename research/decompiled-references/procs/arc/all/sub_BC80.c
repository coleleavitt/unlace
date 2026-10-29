__int64 __fastcall sub_BC80(__int64 a1, int a2, int a3, int a4, char a5)
{
  int v6; // r15d
  __int64 v7; // rax
  __int64 *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r14d
  __int64 v13; // rbx
  int v14; // r12d
  __int16 v15; // ax
  __int64 v16; // rax
  int v17; // ebx
  __int64 result; // rax
  __int64 v19; // rax
  int v20; // ebp

  if ( 4 * a3 - 4 >= a4 )
  {
    if ( under_debugger )
      goto LABEL_25;
    interr(10306);
LABEL_23:
    if ( !under_debugger )
    {
      interr(10307);
      return sub_BEC0((char *)&stru_2830.r_addend + 3);
    }
LABEL_25:
    BUG();
  }
  if ( (unsigned __int64)(a3 + a2) > 8 )
    goto LABEL_23;
  v6 = a4;
  if ( a5 )
  {
    v19 = qalloc_or_throw(24);
    *(_QWORD *)v19 = 0;
    v8 = (__int64 *)v19;
    *(_OWORD *)(v19 + 8) = 0;
    if ( !a3 )
    {
LABEL_18:
      result = cleanup_argloc(a1);
      if ( v8 )
      {
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v8;
      }
      return result;
    }
LABEL_7:
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( v10 < v11 + 1 )
      {
        v16 = qvector_reserve(v8, v9, v11 + 1, 24);
        *v8 = v16;
        v9 = v16;
        v11 = v8[1];
      }
      v13 = v9 + 24 * v11;
      *(_QWORD *)v13 = 0;
      *(_DWORD *)(v13 + 16) = 0xFFFF;
      *(_QWORD *)(v13 + 8) = 0;
      ++v8[1];
      *(_WORD *)(v13 + 16) = 4 * (unsigned __int8)v12;
      v14 = dword_1F5A0[v12 + a2];
      cleanup_argloc(v13);
      v15 = 4;
      *(_DWORD *)v13 = 3;
      *(_DWORD *)(v13 + 8) = v14;
      if ( v6 <= 4 )
        v15 = v6;
      ++v12;
      v6 -= 4;
      *(_WORD *)(v13 + 18) = v15;
      if ( a3 <= v12 )
        break;
      v11 = v8[1];
      v10 = v8[2];
      v9 = *v8;
    }
    goto LABEL_18;
  }
  if ( a3 > 1 && a4 != 8 )
  {
    v7 = qalloc_or_throw(24);
    *(_QWORD *)v7 = 0;
    v8 = (__int64 *)v7;
    *(_OWORD *)(v7 + 8) = 0;
    goto LABEL_7;
  }
  v17 = dword_1F5A0[a2];
  if ( a4 == 8 )
  {
    v20 = dword_1F5A0[a2 + 1];
    result = cleanup_argloc(a1);
    *(_DWORD *)a1 = 4;
    *(_DWORD *)(a1 + 8) = v17 | (v20 << 16);
  }
  else
  {
    result = cleanup_argloc(a1);
    *(_DWORD *)a1 = 3;
    *(_DWORD *)(a1 + 8) = v17;
  }
  return result;
}
