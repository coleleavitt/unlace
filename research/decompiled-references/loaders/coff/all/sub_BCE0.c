__int64 __fastcall sub_BCE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 prev_seg; // rax
  unsigned __int64 v11; // r14
  unsigned int v12; // ebp
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _QWORD v16[11]; // [rsp+10h] [rbp-58h] BYREF

  v16[3] = __readfsqword(0x28u);
  prev_seg = get_prev_seg(a3);
  if ( prev_seg )
  {
    v11 = *(_QWORD *)(prev_seg + 8);
    v12 = (unsigned __int8)add_segm(a2, a3, a4, a5, a6, 32);
    v13 = get_prev_seg(a3);
    v14 = -1;
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 8);
    if ( v11 < v14 )
    {
      v16[0] = v11;
      v16[1] = v14;
      rangeset_t_add(a1 + 401, v16);
    }
  }
  else
  {
    v12 = (unsigned __int8)add_segm(a2, a3, a4, a5, a6, 32);
    get_prev_seg(a3);
  }
  return v12;
}
