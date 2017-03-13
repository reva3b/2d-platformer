#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.TextEditor
struct TextEditor_t3975561390;
// System.String
struct String_t;
// UnityEngine.Event
struct Event_t3028476042;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Event3028476042.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappin1119726228.h"
#include "UnityEngine_UnityEngine_TextEditor_CharacterType593718391.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp3138797698.h"

// System.Void UnityEngine.TextEditor::.ctor()
extern "C"  void TextEditor__ctor_m1990252461 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::get_text()
extern "C"  String_t* TextEditor_get_text_m1324740216 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_text(System.String)
extern "C"  void TextEditor_set_text_m2231271679 (TextEditor_t3975561390 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextEditor::get_position()
extern "C"  Rect_t3681755626  TextEditor_get_position_m59912781 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_position(UnityEngine.Rect)
extern "C"  void TextEditor_set_position_m2773135674 (TextEditor_t3975561390 * __this, Rect_t3681755626  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
extern "C"  int32_t TextEditor_get_cursorIndex_m486786154 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
extern "C"  void TextEditor_set_cursorIndex_m817296949 (TextEditor_t3975561390 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
extern "C"  int32_t TextEditor_get_selectIndex_m1435337632 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
extern "C"  void TextEditor_set_selectIndex_m2701963187 (TextEditor_t3975561390 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C"  void TextEditor_ClearCursorPos_m657928476 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C"  void TextEditor_OnFocus_m4031289844 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnLostFocus()
extern "C"  void TextEditor_OnLostFocus_m1193078298 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::GrabGraphicalCursorPos()
extern "C"  void TextEditor_GrabGraphicalCursorPos_m194203154 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::HandleKeyEvent(UnityEngine.Event)
extern "C"  bool TextEditor_HandleKeyEvent_m1463561879 (TextEditor_t3975561390 * __this, Event_t3028476042 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteLineBack()
extern "C"  bool TextEditor_DeleteLineBack_m1837804025 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteWordBack()
extern "C"  bool TextEditor_DeleteWordBack_m2547107185 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteWordForward()
extern "C"  bool TextEditor_DeleteWordForward_m3131302373 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Delete()
extern "C"  bool TextEditor_Delete_m2400679556 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Backspace()
extern "C"  bool TextEditor_Backspace_m3475645052 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C"  void TextEditor_SelectAll_m435039312 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectNone()
extern "C"  void TextEditor_SelectNone_m3992543199 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::get_hasSelection()
extern "C"  bool TextEditor_get_hasSelection_m3407150912 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C"  bool TextEditor_DeleteSelection_m501755976 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C"  void TextEditor_ReplaceSelection_m356220427 (TextEditor_t3975561390 * __this, String_t* ___replace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Insert(System.Char)
extern "C"  void TextEditor_Insert_m2308889849 (TextEditor_t3975561390 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveRight()
extern "C"  void TextEditor_MoveRight_m2990766682 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLeft()
extern "C"  void TextEditor_MoveLeft_m2907864443 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveUp()
extern "C"  void TextEditor_MoveUp_m799146301 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveDown()
extern "C"  void TextEditor_MoveDown_m3610827042 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLineStart()
extern "C"  void TextEditor_MoveLineStart_m3866297846 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLineEnd()
extern "C"  void TextEditor_MoveLineEnd_m1288595337 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineStart()
extern "C"  void TextEditor_MoveGraphicalLineStart_m3705073185 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineEnd()
extern "C"  void TextEditor_MoveGraphicalLineEnd_m1918309850 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveTextStart()
extern "C"  void TextEditor_MoveTextStart_m926646761 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveTextEnd()
extern "C"  void TextEditor_MoveTextEnd_m158107192 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::IndexOfEndOfLine(System.Int32)
extern "C"  int32_t TextEditor_IndexOfEndOfLine_m156682161 (TextEditor_t3975561390 * __this, int32_t ___startIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveParagraphForward()
extern "C"  void TextEditor_MoveParagraphForward_m2156700157 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveParagraphBackward()
extern "C"  void TextEditor_MoveParagraphBackward_m3489571549 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveCursorToPosition(UnityEngine.Vector2)
extern "C"  void TextEditor_MoveCursorToPosition_m1568397318 (TextEditor_t3975561390 * __this, Vector2_t2243707579  ___cursorPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToPosition(UnityEngine.Vector2)
extern "C"  void TextEditor_SelectToPosition_m3210086107 (TextEditor_t3975561390 * __this, Vector2_t2243707579  ___cursorPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectLeft()
extern "C"  void TextEditor_SelectLeft_m1025549794 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectRight()
extern "C"  void TextEditor_SelectRight_m2396682109 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectUp()
extern "C"  void TextEditor_SelectUp_m3826611706 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectDown()
extern "C"  void TextEditor_SelectDown_m322570859 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectTextEnd()
extern "C"  void TextEditor_SelectTextEnd_m1542698735 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectTextStart()
extern "C"  void TextEditor_SelectTextStart_m3661773790 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MouseDragSelectsWholeWords(System.Boolean)
extern "C"  void TextEditor_MouseDragSelectsWholeWords_m3862197328 (TextEditor_t3975561390 * __this, bool ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DblClickSnap(UnityEngine.TextEditor/DblClickSnapping)
extern "C"  void TextEditor_DblClickSnap_m2540158713 (TextEditor_t3975561390 * __this, uint8_t ___snapping0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineStart(System.Int32)
extern "C"  int32_t TextEditor_GetGraphicalLineStart_m2300210041 (TextEditor_t3975561390 * __this, int32_t ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineEnd(System.Int32)
extern "C"  int32_t TextEditor_GetGraphicalLineEnd_m1122405818 (TextEditor_t3975561390 * __this, int32_t ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindNextSeperator(System.Int32)
extern "C"  int32_t TextEditor_FindNextSeperator_m4074817073 (TextEditor_t3975561390 * __this, int32_t ___startPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::isLetterLikeChar(System.Char)
extern "C"  bool TextEditor_isLetterLikeChar_m4002314989 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindPrevSeperator(System.Int32)
extern "C"  int32_t TextEditor_FindPrevSeperator_m3377670283 (TextEditor_t3975561390 * __this, int32_t ___startPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveWordRight()
extern "C"  void TextEditor_MoveWordRight_m2225371862 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveToStartOfNextWord()
extern "C"  void TextEditor_MoveToStartOfNextWord_m893401463 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveToEndOfPreviousWord()
extern "C"  void TextEditor_MoveToEndOfPreviousWord_m119836618 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToStartOfNextWord()
extern "C"  void TextEditor_SelectToStartOfNextWord_m2812882512 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToEndOfPreviousWord()
extern "C"  void TextEditor_SelectToEndOfPreviousWord_m3931162275 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextEditor/CharacterType UnityEngine.TextEditor::ClassifyChar(System.Char)
extern "C"  int32_t TextEditor_ClassifyChar_m1576648472 (TextEditor_t3975561390 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindStartOfNextWord(System.Int32)
extern "C"  int32_t TextEditor_FindStartOfNextWord_m2609021395 (TextEditor_t3975561390 * __this, int32_t ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindEndOfPreviousWord(System.Int32)
extern "C"  int32_t TextEditor_FindEndOfPreviousWord_m2880983930 (TextEditor_t3975561390 * __this, int32_t ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveWordLeft()
extern "C"  void TextEditor_MoveWordLeft_m1630395617 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectWordRight()
extern "C"  void TextEditor_SelectWordRight_m2211539767 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectWordLeft()
extern "C"  void TextEditor_SelectWordLeft_m3805218630 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineStart()
extern "C"  void TextEditor_ExpandSelectGraphicalLineStart_m752964866 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineEnd()
extern "C"  void TextEditor_ExpandSelectGraphicalLineEnd_m2701307649 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineStart()
extern "C"  void TextEditor_SelectGraphicalLineStart_m171383526 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineEnd()
extern "C"  void TextEditor_SelectGraphicalLineEnd_m1545870419 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectParagraphForward()
extern "C"  void TextEditor_SelectParagraphForward_m1117097520 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectParagraphBackward()
extern "C"  void TextEditor_SelectParagraphBackward_m222420272 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectCurrentWord()
extern "C"  void TextEditor_SelectCurrentWord_m3661678550 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindEndOfClassification(System.Int32,System.Int32)
extern "C"  int32_t TextEditor_FindEndOfClassification_m2938898406 (TextEditor_t3975561390 * __this, int32_t ___p0, int32_t ___dir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectCurrentParagraph()
extern "C"  void TextEditor_SelectCurrentParagraph_m695527942 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded(UnityEngine.Event)
extern "C"  void TextEditor_UpdateScrollOffsetIfNeeded_m1979436403 (TextEditor_t3975561390 * __this, Event_t3028476042 * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C"  void TextEditor_UpdateScrollOffset_m1017266912 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DrawCursor(System.String)
extern "C"  void TextEditor_DrawCursor_m2394985165 (TextEditor_t3975561390 * __this, String_t* ___newText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::PerformOperation(UnityEngine.TextEditor/TextEditOp)
extern "C"  bool TextEditor_PerformOperation_m2560628023 (TextEditor_t3975561390 * __this, int32_t ___operation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SaveBackup()
extern "C"  void TextEditor_SaveBackup_m4030486676 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Cut()
extern "C"  bool TextEditor_Cut_m487430403 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Copy()
extern "C"  void TextEditor_Copy_m385124734 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C"  String_t* TextEditor_ReplaceNewlinesWithSpaces_m2633375220 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Paste()
extern "C"  bool TextEditor_Paste_m3893796664 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MapKey(System.String,UnityEngine.TextEditor/TextEditOp)
extern "C"  void TextEditor_MapKey_m3330329226 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int32_t ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::InitKeyActions()
extern "C"  void TextEditor_InitKeyActions_m3270054209 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DetectFocusChange()
extern "C"  void TextEditor_DetectFocusChange_m2483493478 (TextEditor_t3975561390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClampTextIndex(System.Int32&)
extern "C"  void TextEditor_ClampTextIndex_m3072502406 (TextEditor_t3975561390 * __this, int32_t* ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
