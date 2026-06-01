unsigned __int64 __fastcall sub_6040(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rax
  const void *v6; // r13
  size_t v7; // rax
  size_t v8; // r12
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // rax
  const void *v13; // r12
  size_t v14; // rax
  size_t v15; // rbp
  _BYTE *dest; // [rsp+0h] [rbp-58h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v2 = a1[77];
  v17 = __readfsqword(0x28u);
  dest = nullptr;
  if ( *(_BYTE *)(a2 + 32) )
  {
    v3 = nullptr;
  }
  else
  {
    v3 = nullptr;
    if ( *(_QWORD *)(v2 + 328) != -1 && *(int *)(v2 + 320) <= 99 )
    {
      v3 = nullptr;
      if ( get_ea_name() > 0 )
        goto LABEL_7;
    }
  }
  v4 = *(unsigned __int16 *)(a2 + 6);
  v5 = *(_QWORD *)(a1[78] + 56LL);
  v6 = *(const void **)(v5 + 8 * v4);
  if ( v6 )
  {
    v7 = strlen(*(const char **)(v5 + 8 * v4));
    v8 = v7;
    if ( v7 )
    {
      if ( v7 != -1 )
      {
        dest = (_BYTE *)qvector_reserve();
        v3 = dest;
      }
      memmove(v3, v6, v8);
      dest[v8] = 0;
      v3 = dest;
    }
  }
  if ( *(_BYTE *)(a2 + 32) )
  {
    v10 = *(_WORD *)(a2 + 6);
    switch ( v10 )
    {
      case 28:
        dest = (_BYTE *)qvector_reserve();
        *dest = 89;
        dest[1] = 0;
        v3 = dest;
        break;
      case 30:
        dest = (_BYTE *)qvector_reserve();
        *dest = 90;
        dest[1] = 0;
        v3 = dest;
        break;
      case 26:
        dest = (_BYTE *)qvector_reserve();
        *dest = 88;
        dest[1] = 0;
        v3 = dest;
        break;
      default:
        (*(void (__fastcall **)(_QWORD *, void *, __int64))(*a1 + 56LL))(a1, v3, 33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
        v11 = *(unsigned __int16 *)(a2 + 6);
        v3 = dest;
        v12 = *(_QWORD *)(a1[78] + 56LL);
        v13 = *(const void **)(v12 + 8 * v11 + 8);
        if ( v13 )
        {
          v14 = strlen(*(const char **)(v12 + 8 * v11 + 8));
          v15 = v14;
          if ( v14 )
          {
            if ( v14 != -1 )
            {
              dest = (_BYTE *)qvector_reserve();
              v3 = dest;
            }
            memmove(v3, v13, v15);
            dest[v15] = 0;
            v3 = dest;
          }
        }
        break;
    }
  }
LABEL_7:
  (*(void (__fastcall **)(_QWORD *, void *, __int64))(*a1 + 56LL))(a1, v3, 33);
  if ( dest )
    qfree();
  return v17 - __readfsqword(0x28u);
}

