__int64 __fastcall sub_139A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // ebp
  __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 *v18; // rdx
  char v19[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v20; // [rsp+408h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 1072);
  v20 = __readfsqword(0x28u);
  if ( !v3 || !*(_QWORD *)(a1 + 15608) )
  {
    if ( *(_QWORD *)(a1 + 1008) == *(_QWORD *)(a1 + 1040) )
    {
      set_debug_event_code();
      if ( (((*(_DWORD *)(a2 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      *(_DWORD *)(a2 + 24) = 0;
    }
    else
    {
      copy_debug_event();
      if ( *(_QWORD *)(a1 + 1008) == *(_QWORD *)(a1 + 1024) - 72LL )
      {
        free_debug_event();
        operator delete(*(void **)(a1 + 1016), 0x1F8u);
        v11 = (__int64 *)(*(_QWORD *)(a1 + 1032) + 8LL);
        *(_QWORD *)(a1 + 1032) = v11;
        v12 = *v11;
        v13 = *v11 + 504;
        *(_QWORD *)(a1 + 1016) = v12;
        *(_QWORD *)(a1 + 1024) = v13;
        *(_QWORD *)(a1 + 1008) = v12;
      }
      else
      {
        free_debug_event();
        *(_QWORD *)(a1 + 1008) += 72LL;
      }
    }
LABEL_9:
    v4 = 1;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(a1 + 168) == *(_QWORD *)(a1 + 136) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, a2);
    if ( v4 > 0 )
    {
      if ( (unsigned __int8)sub_214B0(a1, a2, 0) )
      {
        return 0;
      }
      else
      {
        copy_debug_event();
        if ( *(_BYTE *)(a1 + 792) )
        {
          v14 = sub_20820(a2, v19, 1024);
          sub_1FEE0(a1, (unsigned int)"GDE: %s\n", v14, v15, v16, v17, v19[0]);
        }
      }
    }
    return (unsigned int)v4;
  }
  copy_debug_event();
  if ( *(_QWORD *)(a1 + 136) == *(_QWORD *)(a1 + 152) - 72LL )
  {
    free_debug_event();
    operator delete(*(void **)(a1 + 144), 0x1F8u);
    v18 = (__int64 *)(*(_QWORD *)(a1 + 160) + 8LL);
    *(_QWORD *)(a1 + 160) = v18;
    v6 = *v18;
    *(__m128i *)(a1 + 144) = _mm_unpacklo_epi64(
                               (__m128i)(unsigned __int64)*v18,
                               (__m128i)(unsigned __int64)(*v18 + 504));
  }
  else
  {
    free_debug_event();
    v6 = *(_QWORD *)(a1 + 136) + 72LL;
  }
  *(_QWORD *)(a1 + 136) = v6;
  v4 = 2;
  if ( v6 == *(_QWORD *)(a1 + 168) )
    goto LABEL_9;
LABEL_13:
  if ( *(_BYTE *)(a1 + 792) )
  {
    v7 = sub_20820(a2, v19, 1024);
    sub_1FEE0(a1, (unsigned int)"FAKE_GDE: %s\n", v7, v8, v9, v10, v19[0]);
  }
  return (unsigned int)v4;
}

