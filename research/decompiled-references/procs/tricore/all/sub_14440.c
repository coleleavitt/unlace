__int64 __fastcall sub_14440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 sreg; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax

  if ( a5 < 0 )
    goto LABEL_2;
  v8 = sub_BE50(*(_QWORD *)(a2 + 8), (unsigned __int16)a5);
  if ( v8 == -1 )
    goto LABEL_2;
  if ( a4 == -1 )
    a4 = a3;
  sreg = get_sreg(a4, v8);
  if ( sreg == -1 )
  {
LABEL_2:
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 11;
    *(_OWORD *)(a1 + 8) = 0;
    v12 = qvector_reserve(a1, 0, 1, 24, v9, v10);
    v13 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v12;
    v14 = v12 + 24 * v13;
    *(_QWORD *)v14 = sreg;
    *(_QWORD *)(v14 + 8) = a4;
    *(_DWORD *)(v14 + 16) = 0;
    ++*(_QWORD *)(a1 + 8);
    return a1;
  }
}
