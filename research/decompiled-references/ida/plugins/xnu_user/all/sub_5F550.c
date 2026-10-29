__int64 __fastcall sub_5F550(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _BYTE *v5; // rdi
  __int64 (*v6)(); // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  const char *v14; // rax
  const char *v15; // rbx
  size_t v16; // rax
  size_t v17; // rbp
  size_t v18; // r13

  sub_64D50(*(_QWORD *)(a1 + 864));
  if ( (unsigned __int8)sub_66B00(*(_QWORD *)(a1 + 864), "xmlRegisters=i386,arm,mips") )
  {
LABEL_4:
    v6 = *(__int64 (**)())(*(_QWORD *)a1 + 728LL);
    if ( v6 != sub_18B40 )
      ((void (__fastcall *)(__int64))v6)(a1);
    if ( *(_DWORD *)(a1 + 1364) != -3 )
    {
      if ( (unsigned __int8)sub_68CC0(*(_QWORD *)(a1 + 864), 0, 0) )
      {
        *(_DWORD *)(a1 + 1364) = -3;
      }
      else if ( *(_QWORD *)(a1 + 1384) > 1u )
      {
        sub_70460(a1, (unsigned int)"GDB: Error setting thread\n", v7, v8, v9);
        v10 = sub_5F220(a1, a3);
        if ( v10 >= 0 )
          goto LABEL_10;
        return ~*(unsigned __int8 *)(*(_QWORD *)(a1 + 864) + 250LL);
      }
    }
    v10 = sub_5F220(a1, a3);
    if ( v10 >= 0 )
    {
LABEL_10:
      *(_BYTE *)(a1 + 1169) = v10;
      *(_BYTE *)(a1 + 1169) &= 1u;
      sub_4EC20((__int64 *)a1);
      *(_BYTE *)(a1 + 1600) = 1;
      if ( a2 )
        *a2 = 0x500000000LL;
      sub_70460(a1, (unsigned int)"GDB: dbg_init idaregs.nregs %zu\n", *(_QWORD *)(a1 + 680), v11, v12);
      return 1;
    }
    return ~*(unsigned __int8 *)(*(_QWORD *)(a1 + 864) + 250LL);
  }
  v5 = *(_BYTE **)(a1 + 864);
  if ( !v5[250] )
  {
    sub_140F0((__int64)"GDB: qSupported packet failed\n");
    goto LABEL_4;
  }
  v14 = (const char *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 56LL))(v5);
  v15 = v14;
  if ( v14 && (v16 = strlen(v14), (v17 = v16) != 0) )
  {
    v18 = v16 + 1;
    if ( a3[2] < v16 + 1 )
      *a3 = qvector_reserve();
    a3[1] = v18;
    memmove((void *)*a3, v15, v17);
    *(_BYTE *)(*a3 + v17) = 0;
  }
  else
  {
    a3[1] = 0;
  }
  return 4294967294LL;
}

