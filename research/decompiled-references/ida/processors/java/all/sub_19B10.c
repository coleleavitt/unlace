__int64 __fastcall sub_19B10(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v5 = netnode_altval(a2, 0, 65);
  v8[0] = v5;
  if ( v5
    && *(unsigned int *)(a1 + 33129) >= v5
    && (*a3 = v5, v6 = *(_QWORD *)(a1 + 33368), v8[0] = v5 + 1, netnode_getblob(a2, v6, v8, 0, 106))
    && *a3 == v8[0] )
  {
    return *(_QWORD *)(a1 + 33368);
  }
  else
  {
    return 0;
  }
}

