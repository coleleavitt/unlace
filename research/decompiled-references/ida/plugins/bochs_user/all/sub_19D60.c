__int64 __fastcall sub_19D60(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rcx
  unsigned int v3; // ebp
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v7; // rax
  int v8; // esi
  size_t *v9; // r13
  size_t v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // [rsp+0h] [rbp-58h] BYREF
  void *dest; // [rsp+8h] [rbp-50h]
  __int128 v15; // [rsp+10h] [rbp-48h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v13 = -2;
  dest = (void *)-1LL;
  v15 = 0;
  if ( a2 >= *(_QWORD *)(a1 + 24) )
    return 0;
  v2 = *(_QWORD **)(a1 + 8);
  v3 = 0;
  v4 = 32 * a2;
  v5 = 32 * a2 + *v2;
  if ( (*(_DWORD *)(a1 + 96) & *(unsigned __int8 *)(v5 + 12)) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 16) + 40 * a2;
    v8 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 == 3 )
    {
      (*(void (__fastcall **)(__int64, int *, _QWORD))(v7 + 16))(a1, &v13, *(_QWORD *)(v7 + 32));
      v10 = (size_t)dest;
      v5 = v4 + **(_QWORD **)(a1 + 8);
    }
    else
    {
      v9 = (size_t *)(a1 + *(_QWORD *)(v7 + 16));
      if ( v8 == 1 )
      {
        v10 = *(_QWORD *)(v7 + 24);
        dest = nullptr;
        v15 = 0;
        if ( v10 )
        {
          dest = (void *)qvector_reserve();
          memset((char *)dest + v15, 0, v10 - v15);
          *(_QWORD *)&v15 = v10;
          memcpy(dest, v9, v10);
          v10 = (size_t)dest;
          v2 = *(_QWORD **)(a1 + 8);
        }
        v13 = -1;
        v5 = v4 + *v2;
        goto LABEL_19;
      }
      if ( v8 == 2 )
      {
        v10 = *(_QWORD *)(v7 + 24);
        dest = nullptr;
        v15 = 0;
        if ( v10 )
        {
          dest = (void *)qvector_reserve();
          memset((char *)dest + v15, 0, v10 - v15);
          *(_QWORD *)&v15 = v10;
          memcpy(dest, v9, v10);
          v10 = (size_t)dest;
          v2 = *(_QWORD **)(a1 + 8);
        }
        v13 = 0;
        v5 = v4 + *v2;
        goto LABEL_19;
      }
      v10 = -1;
      if ( !v8 )
      {
        v11 = *(_QWORD *)(v7 + 24);
        if ( v11 == 4 )
        {
          v10 = *(unsigned int *)v9;
          goto LABEL_14;
        }
        if ( v11 > 4 )
        {
          if ( v11 == 8 )
          {
            v10 = *v9;
            goto LABEL_14;
          }
        }
        else
        {
          if ( v11 == 1 )
          {
            v10 = *(unsigned __int8 *)v9;
            goto LABEL_14;
          }
          if ( v11 == 2 )
          {
            v10 = *(unsigned __int16 *)v9;
LABEL_14:
            v12 = *(_QWORD *)(v7 + 32);
            switch ( v12 )
            {
              case 2LL:
                v10 = (unsigned __int16)v10;
                break;
              case 4LL:
                v10 = (unsigned int)v10;
                break;
              case 1LL:
                v10 = (unsigned __int8)v10;
                break;
            }
            dest = (void *)v10;
            v5 = v4 + *v2;
            goto LABEL_19;
          }
        }
        v10 = 0;
        goto LABEL_14;
      }
    }
LABEL_19:
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, size_t))(**(_QWORD **)(*(_QWORD *)(a1 + 104) + 1072LL) + 88LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 104) + 1072LL),
           *(_QWORD *)v5,
           v10);
    if ( v13 >= -1 && dest )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
  }
  return v3;
}

