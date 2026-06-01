void __fastcall sub_25ED0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  char v11; // [rsp-8h] [rbp-8h]

  if ( !a3 )
    return;
  v8 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v8 == 257 )
  {
    v9 = *(_QWORD *)a1;
    v10 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 8LL);
    if ( (unsigned int)v10 <= 0x2C )
    {
      sub_23850(v9, v9 + 40 * v10 + 72, (a2 & 0xFFFFFF) - 1, (__int64)a3);
      return;
    }
    goto LABEL_12;
  }
  if ( (_DWORD)v8 == 258 )
  {
    v8 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 8LL);
    if ( (unsigned int)v8 <= 0x2C )
    {
      sub_239A0(*(_QWORD *)a1, a3, *(_QWORD *)a1 + 40 * v8 + 72, (a2 & 0xFFFFFF) - 1, *(_BYTE *)(a1 + 20));
      return;
    }
LABEL_12:
    sub_22610(a3, a2, v8, a4);
    sub_25FA0();
    return;
  }
  if ( (_DWORD)v8 != 256 )
    sub_DB80((__int64)"Cannot select %d", (unsigned int)v8, v8, a4, a5, a6, v11);
  *a3 = a2;
}

