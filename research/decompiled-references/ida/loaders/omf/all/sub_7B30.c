unsigned __int64 __fastcall sub_7B30(__int64 a1, __int64 a2, __int64 a3, _BOOL8 a4)
{
  __int64 v5; // rdx
  _BOOL8 v6; // rcx
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // rax
  _BOOL8 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  const char *v14; // rdx
  const char *v15; // rdi
  const char *v16; // rax
  const char *v17; // rbp
  size_t v18; // rax
  __int64 v19; // r14
  size_t v20; // r13
  __int64 v21; // rax
  _BYTE *v22; // rbp
  __int64 v24; // rax
  __int64 v25; // rdx
  void *src; // [rsp+0h] [rbp-78h] BYREF
  __int64 v27[3]; // [rsp+8h] [rbp-70h]
  _QWORD v28[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+38h] [rbp-40h]
  int v31; // [rsp+40h] [rbp-38h]
  char v32; // [rsp+44h] [rbp-34h]
  unsigned __int64 v33; // [rsp+48h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v32 = a2;
  v28[0] = (unsigned __int16)sub_6A10(a1, a2, a3, a4);
  v7 = sub_6A10(a1, a2, v5, v6);
  v28[1] = v7;
  if ( v7 )
  {
    v29 = 0;
    v8 = *(_QWORD *)(a1 + 48);
  }
  else
  {
    sub_5890(a1, -1, 2);
    v24 = *(_QWORD *)(a1 + 48);
    v25 = *(unsigned __int16 *)(*(_QWORD *)a1 + v24);
    v8 = v24 + 2;
    *(_QWORD *)(a1 + 48) = v8;
    v29 = v25;
  }
  if ( v8 < *(_QWORD *)(a1 + 8) )
  {
    do
    {
      v16 = sub_7530(a1, 0xFFFFFFFFFFFFFFFFLL);
      src = nullptr;
      v17 = v16;
      *(_OWORD *)v27 = 0;
      if ( v16 )
      {
        v18 = strlen(v16);
        v19 = v18 + 1;
        v20 = v18;
        src = (void *)qvector_reserve(&src, 0, v18 + 1, 1);
        v27[0] = v19;
        memmove(src, v17, v20);
        *((_BYTE *)src + v20) = 0;
      }
      if ( dword_145C8 || (*(_BYTE *)(a1 + 58) & 1) != 0 )
      {
        sub_5890(a1, -1, 4);
        v21 = *(_QWORD *)(a1 + 48);
        v11 = *(unsigned int *)(*(_QWORD *)a1 + v21);
        v12 = v21 + 4;
      }
      else
      {
        sub_5890(a1, -1, 2);
        v10 = *(_QWORD *)(a1 + 48);
        v11 = *(unsigned __int16 *)(*(_QWORD *)a1 + v10);
        v12 = v10 + 2;
      }
      *(_QWORD *)(a1 + 48) = v12;
      v31 = v11;
      v30 = (unsigned __int16)sub_6A10(a1, -1, v11, v9);
      v13 = v27[0];
      if ( v27[0] > 1uLL )
      {
        v22 = src;
        if ( dummy_name_ea(src) != -1 )
          *v22 = toupper((unsigned __int8)*v22);
        v13 = v27[0];
      }
      v14 = ::src;
      if ( v13 )
        v14 = (const char *)src;
      netnode_supset(qword_144D8, qword_144D0, v14, 0, 49);
      netnode_supset(qword_144D8, qword_144D0, v28, 37, 50);
      v15 = ::src;
      if ( v27[0] )
        v15 = (const char *)src;
      sub_4C10(v15);
      ++qword_144D0;
      if ( src )
      {
        v27[0] = 0;
        qfree(src);
      }
    }
    while ( *(_QWORD *)(a1 + 48) < *(_QWORD *)(a1 + 8) );
  }
  return v33 - __readfsqword(0x28u);
}

