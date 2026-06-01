__int64 __fastcall sub_33730(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _BYTE *v5; // rdi
  __int64 (*v6)(); // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  const char *v16; // rax
  const char *v17; // rbx
  size_t v18; // rax
  size_t v19; // rbp
  size_t v20; // r13

  sub_39280(*(_QWORD *)(a1 + 864));
  if ( (unsigned __int8)sub_3B490(*(_QWORD *)(a1 + 864), "xmlRegisters=i386,arm,mips") )
  {
LABEL_4:
    v6 = *(__int64 (**)())(*(_QWORD *)a1 + 728LL);
    if ( v6 != sub_1A4C0 )
      ((void (__fastcall *)(__int64))v6)(a1);
    if ( *(_DWORD *)(a1 + 1364) != -3 )
    {
      if ( (unsigned __int8)sub_3D8B0(*(_QWORD *)(a1 + 864), 0, 0) )
      {
        *(_DWORD *)(a1 + 1364) = -3;
      }
      else if ( *(_QWORD *)(a1 + 1384) > 1u )
      {
        sub_48620(a1, (unsigned int)"GDB: Error setting thread\n", v7, v8, v9, v10);
        v11 = sub_33400(a1, a3);
        if ( v11 >= 0 )
          goto LABEL_10;
        return ~*(unsigned __int8 *)(*(_QWORD *)(a1 + 864) + 250LL);
      }
    }
    v11 = sub_33400(a1, a3);
    if ( v11 >= 0 )
    {
LABEL_10:
      *(_BYTE *)(a1 + 1169) = v11;
      *(_BYTE *)(a1 + 1169) &= 1u;
      sub_225A0((__int64 *)a1);
      *(_BYTE *)(a1 + 1600) = 1;
      if ( a2 )
        *a2 = 0x500000000LL;
      sub_48620(a1, (unsigned int)"GDB: dbg_init idaregs.nregs %zu\n", *(_QWORD *)(a1 + 680), v12, v13, v14);
      return 1;
    }
    return ~*(unsigned __int8 *)(*(_QWORD *)(a1 + 864) + 250LL);
  }
  v5 = *(_BYTE **)(a1 + 864);
  if ( !v5[250] )
  {
    sub_DBE0((__int64)"GDB: qSupported packet failed\n");
    goto LABEL_4;
  }
  v16 = (const char *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 56LL))(v5);
  v17 = v16;
  if ( v16 && (v18 = strlen(v16), (v19 = v18) != 0) )
  {
    v20 = v18 + 1;
    if ( a3[2] < v18 + 1 )
      *a3 = qvector_reserve();
    a3[1] = v20;
    memmove((void *)*a3, v17, v19);
    *(_BYTE *)(*a3 + v19) = 0;
  }
  else
  {
    a3[1] = 0;
  }
  return 4294967294LL;
}

