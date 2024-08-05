from pytest import mark

@mark.smoke
@mark.entertainment
@mark.ui
def test_entertainment_function_as_expected(chrome_browser):
    chrome_browser.get('https://www.siriusxm.com/')
    assert True