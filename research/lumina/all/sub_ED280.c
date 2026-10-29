unsigned __int64 __fastcall sub_ED280(__int64 a1, int a2, unsigned __int32 a3, unsigned int a4)
{
  unsigned __int32 v5; // ebp
  unsigned int v6; // r13d
  int v7; // r14d
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int *v10; // r15
  char v11; // dl
  int v12; // r12d
  int v13; // ebp
  unsigned int v14; // r13d
  unsigned int v15; // esi
  __int64 v17; // rcx
  char *v18; // rdx
  unsigned int v19; // [rsp+10h] [rbp-58h]
  int v22; // [rsp+1Ch] [rbp-4Ch]
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v22 = *(_DWORD *)(a1 + 32);
  if ( !a3 || (v5 = a3, v6 = a4, !*(_DWORD *)(a1 + 28)) )
  {
    v17 = 0;
    if ( !a4 )
      return __readfsqword(0x28u) ^ v24;
    goto LABEL_31;
  }
  while ( !(unsigned int)sub_ED1F0(a1, v5) )
  {
    v19 = v6 - 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(*(_QWORD *)(a1 + 8) + 272LL))(
           *(_QWORD *)(a1 + 8),
           v5,
           &v23,
           0);
    if ( v7 )
    {
      sub_ECFF0(a1, "failed to get page %d", v5);
      --v6;
      break;
    }
    v8 = v23;
    v9 = *(_QWORD *)a1;
    v10 = *(unsigned int **)(v23 + 8);
    v11 = *(_BYTE *)(*(_QWORD *)a1 + 33LL);
    if ( a2 )
    {
      v12 = _byteswap_ulong(v10[1]);
      if ( v11 )
      {
        sub_ED130(a1, v5, 2u, 0);
        v9 = *(_QWORD *)a1;
      }
      if ( (*(_DWORD *)(v9 + 56) >> 2) - 2 < (unsigned int)v12 )
      {
        v6 -= 2;
        sub_ECFF0(a1, "freelist leaf count too big on page %d", v5);
        v8 = v23;
        v5 = _byteswap_ulong(*v10);
      }
      else
      {
        v13 = 2;
        if ( v12 > 0 )
        {
          while ( 1 )
          {
            v14 = _byteswap_ulong(v10[v13]);
            if ( *(_BYTE *)(v9 + 33) )
              sub_ED130(a1, v14, 2u, 0);
            ++v7;
            sub_ED1F0(a1, v14);
            ++v13;
            if ( v7 == v12 )
              break;
            v9 = *(_QWORD *)a1;
          }
        }
        v8 = v23;
        v6 = v19 - v12;
        v5 = _byteswap_ulong(*v10);
      }
    }
    else
    {
      v15 = _byteswap_ulong(*v10);
      if ( v11 )
      {
        if ( v6 == 1 )
        {
          v5 = v15;
          v6 = 0;
        }
        else
        {
          sub_ED130(a1, v15, 4u, v5);
          v8 = v23;
          --v6;
          v5 = _byteswap_ulong(*v10);
        }
      }
      else
      {
        v5 = v15;
        --v6;
      }
    }
    if ( v8 )
      sub_C36A0(v8);
    if ( !v5 || !*(_DWORD *)(a1 + 28) )
      break;
  }
  if ( v6 && *(_DWORD *)(a1 + 32) == v22 )
  {
    v17 = a4 - v6;
LABEL_31:
    v18 = "overflow list length";
    if ( a2 )
      v18 = "size";
    sub_ECFF0(a1, "%s is %d but should be %d", v18, v17, a4);
  }
  return __readfsqword(0x28u) ^ v24;
}
