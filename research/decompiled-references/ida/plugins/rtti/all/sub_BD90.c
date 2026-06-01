__int64 __fastcall sub_BD90(_QWORD *a1, __int64 *a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  size_t v9; // r13
  __int64 v10; // r14
  __int64 v11; // rax

  if ( !a1[3] )
    return 0;
  v2 = sub_BCF0(a1, a2);
  if ( !(_BYTE)v2 )
    return 0;
  if ( !a2 )
    return v2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = *a2;
  if ( v5 )
  {
    v8 = v5 + 4;
    v9 = v5 - 1;
    v10 = v5 + 3;
    if ( v6 >= v5 + 4 )
      goto LABEL_8;
    goto LABEL_14;
  }
  if ( v6 <= 4 )
  {
    v9 = 0;
    v8 = 5;
    v10 = 4;
LABEL_14:
    v11 = qvector_reserve();
    *a2 = v11;
    v7 = v11;
LABEL_8:
    a2[1] = v8;
    *(_BYTE *)(v7 + v10) = 0;
    if ( v9 )
      memmove((void *)(*a2 + 4), (const void *)*a2, v9);
    goto LABEL_10;
  }
  a2[1] = 5;
  *(_BYTE *)(v7 + 4) = 0;
LABEL_10:
  *(_DWORD *)*a2 = 1230264927;
  return v2;
}
