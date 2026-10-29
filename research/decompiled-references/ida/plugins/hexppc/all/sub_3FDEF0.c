unsigned __int64 __fastcall sub_3FDEF0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 result; // rax
  const void *v6; // r8
  void *v7; // rax
  const void *v8; // [rsp+0h] [rbp-48h]
  _DWORD v9[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v9[0] = a4;
  sub_121740(a1, (unsigned __int8 *)a2);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  copy_tinfo_t();
  if ( a1 + 32 != a2 + 32 )
  {
    v4 = *(_QWORD *)(a2 + 40);
    if ( v4 > 1 )
    {
      v6 = *(const void **)(a2 + 32);
      v7 = *(void **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v4 )
      {
        v8 = *(const void **)(a2 + 32);
        v7 = (void *)qvector_reserve();
        v6 = v8;
        *(_QWORD *)(a1 + 32) = v7;
      }
      *(_QWORD *)(a1 + 40) = v4;
      memmove(v7, v6, v4 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v4 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 40) = 0;
    }
  }
  copy_argloc();
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  copy_tinfo_t();
  if ( *(_BYTE *)a1 == 14 )
    return sub_3FCCF0(a1, v9);
  result = v9[0];
  *(_DWORD *)(a1 + 56) = 3;
  *(_DWORD *)(a1 + 64) = result;
  return result;
}

