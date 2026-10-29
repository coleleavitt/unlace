char __fastcall sub_98B70(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  unsigned __int64 v6; // rdx
  char result; // al
  int v8; // eax
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  __int64 v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = a1[28];
  v10[1] = __readfsqword(0x28u);
  if ( (v2 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v2 != -1 )
  {
    if ( under_debugger )
      BUG();
    result = interr(30476);
    goto LABEL_8;
  }
  v3 = *a1;
  v10[0] = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 88LL);
  a1[32] = v4;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64 *))(v4 + 64))(*(_QWORD *)(v3 + 24), &v9, v10) )
    sub_95A30(v10[0], (__int64)"die.cpp", 70, (__int64)"Cannot retrieve section offset for %s", "DIE");
  v1 = *(_QWORD *)(*a1 + 16);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(a1[32] + 48))(*(_QWORD *)(*a1 + 24));
  a1[29] = v1;
  v6 = v9 | ((unsigned __int64)(v5 != 0) << 63);
  a1[28] = v6;
  result = v6 != -1 && (v6 & 0x7FFFFFFFFFFFFFFFLL) != 0;
  if ( result )
  {
LABEL_8:
    if ( *(_BYTE *)(v1 + 409) )
    {
      v8 = sub_840B0(v1, a1 + 28);
      *((_DWORD *)a1 + 60) = v8;
      return v8 != -1;
    }
  }
  return result;
}

