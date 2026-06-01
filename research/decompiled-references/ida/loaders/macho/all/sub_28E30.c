__int64 __fastcall sub_28E30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r12
  const char *v6; // rbp
  size_t v7; // r12
  size_t v8; // r13
  void *v9; // rax
  __int64 v11; // rax
  char v12[72]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v4 = 16;
  if ( !*(_BYTE *)(a2 + 161) )
    v4 = 12;
  v5 = sub_28C90(a2, a3 + v4);
  if ( v5 == -1 )
  {
    *(_QWORD *)a1 = 0;
    v6 = v12;
    *(_OWORD *)(a1 + 8) = 0;
  }
  else
  {
    if ( v5 != qlseek() )
    {
      *(_QWORD *)a1 = 0;
      v6 = v12;
      *(_OWORD *)(a1 + 8) = 0;
      v7 = strlen(v12);
      v8 = v7 + 1;
      goto LABEL_8;
    }
    v11 = qlgetz();
    *(_QWORD *)a1 = 0;
    v6 = (const char *)v11;
    *(_OWORD *)(a1 + 8) = 0;
    if ( !v11 )
      return a1;
  }
  v7 = strlen(v6);
  v8 = v7 + 1;
LABEL_8:
  v9 = (void *)qvector_reserve();
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v8;
  memmove(v9, v6, v7);
  *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
  return a1;
}

