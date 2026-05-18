unsigned __int64 __fastcall sub_93E20(_QWORD *a1, char *a2)
{
  _QWORD v3[36]; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int64 v4; // [rsp+128h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  qmemcpy(v3, a1, sizeof(v3));
  *a1 = *(_QWORD *)a2;
  a1[35] = *((_QWORD *)a2 + 35);
  qmemcpy(
    (void *)((unsigned __int64)(a1 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)(a2 - ((char *)a1 - ((unsigned __int64)(a1 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 8) & 0xFFFFFFF8) + 288) >> 3));
  *(_QWORD *)a2 = v3[0];
  *((_QWORD *)a2 + 35) = v3[35];
  qmemcpy(
    (void *)((unsigned __int64)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)v3 - &a2[-((unsigned __int64)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
    8LL * (((unsigned int)a2 - (((_DWORD)a2 + 8) & 0xFFFFFFF8) + 288) >> 3));
  return v4 - __readfsqword(0x28u);
}
