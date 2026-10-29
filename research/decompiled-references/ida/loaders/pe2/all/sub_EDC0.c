__int64 __fastcall sub_EDC0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  size_t v4; // r13
  void *v5; // r13
  __int128 v6; // kr00_16
  size_t v7; // rax
  void *v8; // [rsp+0h] [rbp-468h]
  __int128 v9; // [rsp+8h] [rbp-460h]
  char src; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v11; // [rsp+428h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v1 = netnode_supval();
  v2 = v1;
  if ( v1 == 9 )
  {
    if ( !src )
    {
      netnode_qgetblob();
      return a1;
    }
    v4 = 8;
    v9 = 0;
    goto LABEL_6;
  }
  if ( v1 <= 0 )
    return a1;
  v5 = nullptr;
  v9 = 0;
  v7 = v1 - 1;
  v6 = 0u;
  if ( v7 )
  {
    v4 = v7;
LABEL_6:
    v8 = (void *)qvector_reserve();
    *(_QWORD *)&v9 = v2;
    memmove(v8, &src, v4);
    *((_BYTE *)v8 + v4) = 0;
    v5 = v8;
    v6 = v9;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree();
  }
  *(_QWORD *)a1 = v5;
  *(_OWORD *)(a1 + 8) = v6;
  return a1;
}

