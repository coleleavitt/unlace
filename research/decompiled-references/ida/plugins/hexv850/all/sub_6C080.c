unsigned __int64 __fastcall sub_6C080(_DWORD *a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  bool v6; // zf
  unsigned int *v7; // rsi
  unsigned int i; // ebx
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rdx
  unsigned int *v12; // rcx
  unsigned int *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // [rsp+7h] [rbp-61h]
  __int64 v20[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v6 = *(_QWORD *)(a3 + 16) == 0;
  v7 = *(unsigned int **)a3;
  v21 = __readfsqword(0x28u);
  *(_QWORD *)(a3 + 8) = 0;
  if ( v6 )
  {
    v15 = qvector_reserve();
    v16 = *(_QWORD *)(a3 + 8);
    *(_QWORD *)a3 = v15;
    v7 = (unsigned int *)(v15 + 4 * v16);
  }
  *v7 = a2;
  ++*(_QWORD *)(a3 + 8);
  for ( i = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
        ;
        i = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, i + 1) )
  {
    v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v10 != sub_605C0 )
      break;
    if ( a1[14] == i )
      return v21 - __readfsqword(0x28u);
LABEL_7:
    if ( (unsigned __int8)sub_6B2F0((__int64)a1, a4, i, a2) )
    {
      v20[0] = 0;
      v20[1] = 0;
      v19 = sub_6B1B0((__int64)a1, v20, a2, i);
      qfree();
      if ( v19 )
      {
        v11 = *(_QWORD *)(a3 + 8);
        v12 = (unsigned int *)(*(_QWORD *)a3 + 4 * v11);
        if ( *(unsigned int **)a3 == v12 )
          goto LABEL_14;
        v13 = *(unsigned int **)a3;
        while ( i != *v13 )
        {
          if ( v12 == ++v13 )
            goto LABEL_14;
        }
        if ( v12 == v13 )
        {
LABEL_14:
          if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v11 + 1) )
          {
            v17 = qvector_reserve();
            v18 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)a3 = v17;
            v12 = (unsigned int *)(v17 + 4 * v18);
          }
          *v12 = i;
          ++*(_QWORD *)(a3 + 8);
        }
      }
    }
  }
  if ( (unsigned int)v10((__int64)a1) != i )
    goto LABEL_7;
  return v21 - __readfsqword(0x28u);
}

