__int64 __fastcall sub_1A3780(_DWORD *a1, char *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // r12
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v2 = sub_11F7C0(a2, v7, 1u);
  if ( (_BYTE)v2
    && ((v3 = v2,
         LODWORD(v4) = v7[0],
         !(v7[0] % (unsigned __int64)*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 64LL) + 1504LL) + 80LL)))
     || ((v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 480LL) + 8LL), (unsigned __int8)getinf())
       ? (v4 = (unsigned __int8)getinf())
       : (v4 = *(_QWORD *)(v6 + 120)),
         v7[0] == v4)) )
  {
    a1[60] = v4;
  }
  else
  {
    return 0;
  }
  return v3;
}

