__int64 __fastcall sub_30E70(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r12
  __int64 result; // rax
  const void *v8; // r14
  void *v9; // rax
  const void *v10; // r14
  void *v11; // rax
  const void *v12; // r14
  void *v13; // rax
  const void *v14; // r14
  void *v15; // rax
  const void *v16; // r14
  void *v17; // rax

  *(_DWORD *)a2 = *(_DWORD *)(a1 + 168);
  if ( a2 + 8 != a1 + 144 )
  {
    v2 = *(_QWORD *)(a1 + 152);
    if ( v2 > 1 )
    {
      v16 = *(const void **)(a1 + 144);
      v17 = *(void **)(a2 + 8);
      if ( *(_QWORD *)(a2 + 24) < v2 )
      {
        v17 = (void *)sub_1987B0(a2 + 8, *(_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 152), 1);
        *(_QWORD *)(a2 + 8) = v17;
      }
      *(_QWORD *)(a2 + 16) = v2;
      memmove(v17, v16, v2 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v2 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = 0;
    }
  }
  if ( a2 + 32 != a1 + 376 )
  {
    v3 = *(_QWORD *)(a1 + 384);
    if ( v3 > 1 )
    {
      v14 = *(const void **)(a1 + 376);
      v15 = *(void **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 48) < v3 )
      {
        v15 = (void *)sub_1987B0(a2 + 32, *(_QWORD *)(a2 + 32), *(_QWORD *)(a1 + 384), 1);
        *(_QWORD *)(a2 + 32) = v15;
      }
      *(_QWORD *)(a2 + 40) = v3;
      memmove(v15, v14, v3 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 32) + v3 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 40) = 0;
    }
  }
  if ( a2 + 56 != a1 + 400 )
  {
    v4 = *(_QWORD *)(a1 + 408);
    if ( v4 > 1 )
    {
      v12 = *(const void **)(a1 + 400);
      v13 = *(void **)(a2 + 56);
      if ( *(_QWORD *)(a2 + 72) < v4 )
      {
        v13 = (void *)sub_1987B0(a2 + 56, *(_QWORD *)(a2 + 56), *(_QWORD *)(a1 + 408), 1);
        *(_QWORD *)(a2 + 56) = v13;
      }
      *(_QWORD *)(a2 + 64) = v4;
      memmove(v13, v12, v4 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 56) + v4 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 64) = 0;
    }
  }
  if ( a2 + 80 != a1 + 424 )
  {
    v5 = *(_QWORD *)(a1 + 432);
    if ( v5 > 1 )
    {
      v10 = *(const void **)(a1 + 424);
      v11 = *(void **)(a2 + 80);
      if ( *(_QWORD *)(a2 + 96) < v5 )
      {
        v11 = (void *)sub_1987B0(a2 + 80, *(_QWORD *)(a2 + 80), *(_QWORD *)(a1 + 432), 1);
        *(_QWORD *)(a2 + 80) = v11;
      }
      *(_QWORD *)(a2 + 88) = v5;
      memmove(v11, v10, v5 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 80) + v5 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 88) = 0;
    }
  }
  if ( a2 + 104 != a1 + 448 )
  {
    v6 = *(_QWORD *)(a1 + 456);
    if ( v6 > 1 )
    {
      v8 = *(const void **)(a1 + 448);
      v9 = *(void **)(a2 + 104);
      if ( *(_QWORD *)(a2 + 120) < v6 )
      {
        v9 = (void *)sub_1987B0(a2 + 104, *(_QWORD *)(a2 + 104), *(_QWORD *)(a1 + 456), 1);
        *(_QWORD *)(a2 + 104) = v9;
      }
      *(_QWORD *)(a2 + 112) = v6;
      memmove(v9, v8, v6 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 104) + v6 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 112) = 0;
    }
  }
  *(_DWORD *)(a2 + 128) = *(_DWORD *)(a1 + 472);
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a1 + 480);
  *(_DWORD *)(a2 + 144) = *(_DWORD *)(a1 + 488);
  result = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a2 + 152) = result;
  return result;
}
