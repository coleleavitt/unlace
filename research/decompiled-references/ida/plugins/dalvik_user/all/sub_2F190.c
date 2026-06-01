__int64 __fastcall sub_2F190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7)
{
  _QWORD *v7; // rbp
  int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  sub_29F50(*(_QWORD *)(a1 + 16), a2, a3, a4, a5, a6);
  if ( (unsigned __int8)sub_2F090(*(_QWORD *)(a1 + 16), (__int64)&v16, *(_QWORD *)(a1 + 24)) )
  {
    v7 = *(_QWORD **)(a1 + 16);
    v8 = v16;
    v9 = *(_QWORD *)(a1 + 24);
    v10 = 16LL * v7[221];
    v11 = v7[220] + v10;
    if ( v10 )
    {
      v12 = v7[220];
      while ( v9 != *(_QWORD *)v12 )
      {
        v12 += 16;
        if ( v12 == v11 )
          goto LABEL_9;
      }
      *(_DWORD *)(v12 + 8) = v16;
    }
    else
    {
LABEL_9:
      if ( v7[222] < (unsigned __int64)(v7[221] + 1LL) )
      {
        v14 = qvector_reserve();
        v15 = v7[221];
        v7[220] = v14;
        v11 = v14 + 16 * v15;
      }
      *(_QWORD *)v11 = v9;
      *(_DWORD *)(v11 + 8) = v8;
      ++v7[221];
    }
  }
  else
  {
    sub_11270((__int64)"Unable to set breakpoint at %a", a7);
  }
  return 1;
}

